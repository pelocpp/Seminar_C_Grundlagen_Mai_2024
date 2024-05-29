#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <stdio.h>    // printf


// Dynamische Speicherverwaltung

// global

void test_11_01()
{
    int n = 123;   // Stack

    // möchte Speicher für eine int-Variable dynamisch reservieren / allokieren

    int* ip = malloc(1 * sizeof(int));

    *ip = 123;

    free(ip);
}

void test_11_02()
{
    int n = 123;   // Stack

    // möchte Speicher für eine int-Variable dynamisch reservieren / allokieren

    int* ip = malloc(1 * sizeof(int));

    if (ip == NULL) {
        printf("Kein Speicher mehr ....");
        return;
    }
    else
    {
        *ip = 123;
        free(ip);
    }
}


void tueEtwasMitDenDaten(int* ptr) {

    *ptr = 999;

    printf("Datum: %d\n", *ptr);

    free(ptr);
}

void test_11_03()
{
    int n = 123;

    // möchte Speicher für eine int-Variable dynamisch reservieren / allokieren

    int* ip = malloc(1 * sizeof(int));

    if (ip == NULL) {
        printf("Kein Speicher mehr ....");
        return;
    }
    else
    {
        *ip = 123;

        tueEtwasMitDenDaten(ip);

        printf("Datum: %d\n", *ip);

        free(ip);
    }
}

void test_11_04()
{
    int* ip = NULL;

    // .....................................

    free(ip);  // ist für NULL zulässig
}


int computeLengthOfArray()
{
    // .........
    return 10;
}

void workWithArray(int* ptr, int length)
{
    // a) Vorbelegen
    for (int i = 0; i < length; ++i) {
        *(ptr + i) = 2 * i;   // Zeiger-Arithmetik
    }

    // b) Vorbelegen - eleganter / angenehmer
    for (int i = 0; i < length; ++i) {
        ptr[i] = 2 * i;       // Index-Operator
    }

    // c) Zugreifen / Lesen / Ausgeben
    for (int i = 0; i < length; ++i) {
        printf("Index %2d: %3d\n", i, ptr[i]);
    }
}

void test_11_05()
{
    // Thematik:
    // C-Arrays sind FIXED-SIZE ( int numbers[10]; )
    // Mit malloc / free kann man variabel lange Felder bekommen.

    int length = computeLengthOfArray();  // Wert von length wird berechnet

    int* ip = malloc(length * sizeof(int));  // Groesse in Bytes

    if (ip == NULL) {
        printf("Kein Speicher mehr ....");
        return;
    }
    else
    {
        // Demonstration: Wir arbeite ich mit einem variabel langen Feld

        // NUR ZUR DEMONSTRATION: FEHLER
        length = length + 100;

        workWithArray(ip, length);

        free(ip);
    }
}

void test_11()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    test_11_05();
}
