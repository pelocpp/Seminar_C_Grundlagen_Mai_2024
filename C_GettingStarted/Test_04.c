#include <stdio.h>    // printf

// Anweisungen und Konstrollstrukturen

void test_04_01()
{
    // for-Wiederholung
    for (int i = 0; i < 5; i = i + 1) {

        printf("for - Bin hier: %d\n", i);
    }

    // Dasselbe mit while:

    int k = 0;

    while (k < 5) {

        printf("while - Bin hier: %d\n", k);

        k++;
    }
}

void test_04()
{
    // Wann ist eine ganze Zahl gerade oder ungerade ???

    int n = 10;

    // ....

    if ( (n % 2) == 0 ) {

        printf("n ist gerade: %d\n", n);
    }

    n = 11;

    if ( (n % 2) == 1 ) {

        printf("n ist ungerade: %d\n", n);
    }
}