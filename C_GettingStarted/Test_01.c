// Datentypen, Variablen und Konstanten

#include <stdio.h>

void test_01()
{
    int wert = 123;

    printf("Laenge: %zu\n", sizeof(short));
    printf("Laenge: %zu\n", sizeof(int));
    printf("Laenge: %zu\n", sizeof(long));
    printf("Laenge: %zu\n", sizeof(long long));

    printf("Laenge: %zu\n", sizeof(float));
    printf("Laenge: %zu\n", sizeof(double));

    // Zeichen: Ziffern, Buchstaben und Symbole
    char ch = '[';   // ' = Einzelhochkomma

    // Zeichenketten: " = Doppelhochkomma
    char* kette = "ABCDE";    // Viele Zeichen

    // std::string kette2 = "ABCDE";    // Viele Zeichen // std::string = C++
}
