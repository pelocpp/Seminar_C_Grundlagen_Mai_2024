#include <stdio.h>    // printf

// Unterprogramme

void printHello(int count, float demoWert);  // Vorwärtsdeklaration


void test_05_01()
{
    int wieOft = 7;

    printHello (wieOft, 123.456F);   // Aufruf
}
                    // Definition eines Unterprogramms
                    // Kopf eines Unterprogramms: Schnittstelle / Signatur
                    //                            eines Unterprogramms

// procedure
void printHello(int count, float demoWert)
{     
    printf("demoWert: %f\n", demoWert);  // %d => dezimalen Wert
    if (demoWert < 0.0F) {
        return;
    }

    for (int i = 0; i < count; ++i) {
        printf("Hello\n");
    }
}

// function
static int summeMalZehn(int zahl1, int zahl2)
{
    int result;

    result = zahl1 + zahl2;

    return 10 * result;
}

void test_05()
{
    int ergebnis = 0;
    int ergebnisVonPrintf = 0;

    ergebnis = summeMalZehn(11, 12);

    ergebnisVonPrintf = printf("Ergebnis: %d\n", ergebnis);

    printf("ergebnisVonPrintf: %d\n", ergebnisVonPrintf);
}