#include <stdio.h>     // printf
#include <stdlib.h>    // malloc

// Beispiel: Struktur DynamicIntArray

// Daten
struct DynamicIntArray
{
    int*    m_data;
    size_t  m_length;
};

// Funktionen (Methoden)
int  initDynamicIntArray(struct DynamicIntArray* array, size_t length);
void releaseDynamicIntArray(struct DynamicIntArray* array);
void printDynamicIntArray(struct DynamicIntArray* array);
void fillDynamicIntArray(struct DynamicIntArray* array, int value);
int resizeDynamicIntArray(struct DynamicIntArray* array, int newLength);

// getter / setter
size_t getLength(struct DynamicIntArray* array);
int get(struct DynamicIntArray* array, int index);
void set(struct DynamicIntArray* array, int index, int value);

// ===================================================================
// Implementierung

int initDynamicIntArray(struct DynamicIntArray* array, size_t length)
{
    array->m_data = calloc(length, sizeof (int));
    if (array->m_data == NULL) {
        return 0;
    }

    array->m_length = length;
    return 1;
}

void releaseDynamicIntArray(struct DynamicIntArray* array)
{
    if (array->m_data != NULL) {
        free(array->m_data);
    }
}

void fillDynamicIntArray(struct DynamicIntArray* array, int value)
{
    for (int i = 0; i < array->m_length; ++i) {

        array->m_data[i] = value;
    }
}

void printDynamicIntArray(struct DynamicIntArray* array)
{
    for (int i = 0; i < array->m_length; ++i) {

        printf("%3d: %d\n", i, array->m_data[i]);
    }
    printf("\n");
}

int resizeDynamicIntArray(struct DynamicIntArray* array, int newLength)
{
    if (newLength <= array->m_length) {
        // shorten
        array->m_length = newLength;
        return 1;
    }
    else
    {
        // enlarge - neuen, größeren Puffer anlegen
        // Achtung: Wir brauchen den alten Puffer noch !!!
        int* buffer = calloc(newLength, sizeof(int));
        if (buffer == NULL) {
            return 0;
        }

        // alten Puffer in neuen Puffer umkopieren
        for (int i = 0; i < array->m_length; ++i) {

            buffer[i] = array->m_data[i];
        }

        // den alten Puffer freigeben
        free(array->m_data);

        // die Daten der Strukturvariable 'struct DynamicIntArray* array' aktualisieren
        array->m_data = buffer;
        array->m_length = newLength;

        return 1;
    }
}

// getter / setter
size_t getLength(struct DynamicIntArray* array)
{
    return array->m_length;
}

int get(struct DynamicIntArray* array, int index)
{
    if (index >= array->m_length) {
        return -1;
    }

    return array->m_data[index];
}

void set(struct DynamicIntArray* array, int index, int value)
{
    if (index >= array->m_length) {
        return;  // silent error recover - doing nothing
    }

    array->m_data[index] = value;
}


// ===================================================================


void test_13_01()
{
    struct DynamicIntArray data = { NULL, 0 };

    initDynamicIntArray(&data, 10);
    printDynamicIntArray(&data);

    fillDynamicIntArray(&data, 1);
    printDynamicIntArray(&data);

    releaseDynamicIntArray(&data);

    // Option: Die Länge des Felds auf 20 vergrößern: resize
}

void test_13_02()
{
    struct DynamicIntArray data = { NULL, 0 };

    releaseDynamicIntArray(&data);
}

void test_13_03()
{
    struct DynamicIntArray data = { NULL, 0 };

    initDynamicIntArray(&data, 10);
    fillDynamicIntArray(&data, 1);
    printDynamicIntArray(&data);

    // verkürzen
    resizeDynamicIntArray(&data, 5);
    fillDynamicIntArray(&data, 2);
    printDynamicIntArray(&data);

    // verlängern
    resizeDynamicIntArray(&data, 15);
    printDynamicIntArray(&data);

    int value = get(&data, 3);
    printf("Wert an Index 3: %d\n", value);

    int length = getLength(&data);
    printf("Length: %d\n", length);
}


void test_13()
{
    test_13_03();
}