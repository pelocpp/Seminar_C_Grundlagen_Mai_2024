// Hello World in C

#include <stdio.h>

#define  Maximum 150

// Vorwärts-Deklaration
void test_01();
void test_02();
void test_03();
void test_04();

int main_hello_world()
{
    printf("Hello World\n");

    printf("Ausgabe: %d\n", Maximum );   // Preprocessor: Maximum => 100

    return 1;
}

int main()
{
    test_04();

    return 1;
}
