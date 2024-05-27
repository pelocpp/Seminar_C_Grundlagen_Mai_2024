#include <stdio.h>    // printf

// Anweisungen und Konstrollstrukturen

void test_03_01()
{
    // for-Wiederholung
    for (int i = 0; i < 5; i = i + 1) {

        printf("Bin hier: %d\n", i);
    }
}

void test_03_02()
{
    // for-Wiederholung
    for (int i = 0; i < 5; i = i + 1) {

        if (i == 3) {  // Ausnahme , unerwarteter Wert von einer Eingabe
            break;
        }

        printf("Bin hier: %d\n", i);
    }
}

void test_03_03()
{
    // for-Wiederholung
    for (int i = 0; i < 5; i = i + 1) {

        if (i == 3) {  // Ausnahme , unerwarteter Wert von einer Eingabe
            continue;
        }

        printf("Bin hier: %d\n", i);
    }
}


void test_03_04()
{
    // for-Wiederholung // Gimmicks

    int i = 0;

    // Endlos-Schleife
    for (;;) {

        // i = i + 1;
        ++i;
        //oder
        i++;

        printf("Bin hier: %d\n", i);

        if (i >= 10) {
            break;
        }
    }
}

// Vorsicht:

void test_03()
{
    // Inkrement

    int n = 10;

    int m;

    m = ++n;  // Pre-Inkrement

    // versus

    m = n++;  // Post-Inkrement

    // ============================

    // Tipp

    ++n;
    m = n;  // Wertzuweisung

    // versus

    m = n;  // Wertzuweisung
    n++;
}