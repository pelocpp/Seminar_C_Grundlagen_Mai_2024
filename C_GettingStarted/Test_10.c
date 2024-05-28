#include <stdio.h>    // printf

// Speicherbereiche

// Definition einer globalen Variablen
int globaleVariable = 100;

void inkrementieren()
{
    globaleVariable++;
}

void ausgeben()
{
    printf("Wert: %d\n", globaleVariable);
}

void funktionMitLokalenVariablen()
{
    int x, y, z;

    x = 1;
    y = 2;
    z = 3;

    printf("Wert von x: %d\n", x);
}

void test_10()
{
    ausgeben();

    inkrementieren();
    ausgeben();

    funktionMitLokalenVariablen();

    inkrementieren();
    ausgeben();
}
