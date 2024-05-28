#include <stdio.h>    // printf

// Felder

#define Length 10

void test_06_01()
{
    // 10 Zahlen des Typs int

    int n;

    // .......

    n = 123;

    // int numbers [n];   does NOT compile

}

void test_06_02()
{
    // 10 Zahlen des Typs int

    int numbers[Length];

    // Zugriff auf ein Element des Felds:
    numbers[3] = 123;

}

void test_06_03()
{
    // 10 Zahlen des Typs int

    int numbers[Length];


    // Typische Vorbelegung // schreiben
    for (int i = 0; i < Length; i++) {

        numbers[i] = 2 * i;
    }


    // Typische Ausgabe // lesen
    for (int i = 0; i < Length; i++) {

        printf("Wert an der Stelle %d: %d\n", i, numbers[i]);
    }
}

void test_06()
{
    // 10 Zahlen des Typs int
    // Vorbelegung
    int numbers[Length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Typische Ausgabe // lesen
    for (int i = 0; i < Length; i++) {

        printf("Wert an der Stelle %d: %d\n", i, numbers[i]);
    }

    // ========================================

    int numbers2[] = { 1, 2, 3, 4, 5 };   // Compiler berechnet die Länge

    int length = sizeof(numbers2) / sizeof(int);

    // Typische Ausgabe // lesen
    for (int i = 0; i < length; i++) {

        printf("Wert an der Stelle %d: %d\n", i, numbers2[i]);
    }

    // ========================================

    int numbers9[100];

    int numbers3[100] = { 0 };  // die Zahl 100 sollte mit einem #define definiert werden !!!

    // Typische Ausgabe // lesen
    for (int i = 0; i < 100; i++) {

        printf("Wert an der Stelle %d: %d\n", i, numbers2[i]);
    }
}