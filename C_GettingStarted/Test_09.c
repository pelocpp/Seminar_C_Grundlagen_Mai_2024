#include <stdio.h>    // printf

// Zeichen und Zeichenketten

void test_09_01()
{
    int size = sizeof(char);

    char ch = '?';

    char lf =  '\n';

    char cr =  '\r';
}

void test_09_02()
{
    // ASCII Tabelle

    // Symbiose:      char <=> int
   
    for (int i = 0; i <= 127; ++i) {

        int ascciCode = i;

        char ch = i;

        printf("Ascii-Code: %03d - Zeichen: %c\n", ascciCode, ch);

        // oder

        printf("Ascii-Code: %03d - Zeichen: %c\n", i, i);
    }

}

void test_09()
{
    // Das 0 Zeichen

    char ch1 = '0';     // falsch

    char ch2 = 0;       // perfekt

    char ch3 = '\0';    // auch perfekt

    "ABCDE";   // empty statement

    printf("1.: %s\n", "ABCDE");


    // Eine Zeichenkette in einem ARRAY
    char zeichen[20];
    zeichen[0] = 'A';
    zeichen[1] = 'B';
    zeichen[2] = 'C';
    zeichen[3] = 'D';
    zeichen[4] = 'E';
    zeichen[5] = 0;

    printf("2.: %s\n", zeichen);

    // Eine konstante Zeichenkette:
    // Hier sieht die Sprache C die Anfangsadresse

    char* s = "123456789012";  // 12 Zeichen
    printf("3.: %s\n", s);

    printf("4.: %zu\n", sizeof(int*));
    printf("5.: %zu\n", sizeof (s));

    char anfang = *s;

    printf("6.: %zu\n", sizeof (*s));
    printf("6.: %zu\n", sizeof(char));
}