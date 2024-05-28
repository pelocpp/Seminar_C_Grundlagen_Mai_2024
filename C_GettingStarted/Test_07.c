#include <stdio.h>    // printf

// Zeiger

void test_07_01()
{
    int n;

    n = 123;

    int* pi;

    pi = &n;   // Adress-Operator '&'
               // Nomenklatur: Man sagt: eine Adresse einer Variable bilden / eruieren
               // Nomenklatur: Auch:     eine Variable referenzieren (Adresse)


    // Wert der Variablen n ändern
    n = 456;

    // Wert der Variablen n ändern - OHNE den Bezeichern n zu verwenden
    // Indirekten Zugriff

    *pi = 789;   // Indirekten Zugriff (via Adresse): '*'

                 // Nomenklatur: Einen Wert einer Variable indirekt zuweisen
                 // Nomenklatur: Auch: Eine Variable mit einer Adresse dereferenzieren
}

void malZwei(int n)
{
    n = 2 * n;
}


void test_07_02()
{
    int x = 123;

    printf("x = %d\n", x);   // 123

    malZwei(x);

    printf("x = %d\n", x);   // 123 oder 246
}


void malZweiEx(int* pn)   // pn = lokale Variable von malZweiEx
{
    int tmp;    // tmp = lokale Variable von malZweiEx

    tmp = *pn * 2;

    *pn = tmp;

    // Oder

    // *pn = *pn * 2;   // kompakt in einer Zeile :)
}


void test_07_03()
{
    int x = 123;

    printf("x = %d\n", x);   // 123

    int* addressOfx = &x;

    printf("Adresse von x = %p\n", &x);   // 123 oder 246

    // malZweiEx(&x);
    malZweiEx(addressOfx);

    printf("x = %d\n", x);   // 123 oder 246
}


void test_07()
{
    int n = 123;

    int* pi = NULL;
    // oder
    // int* pi = 0;

    pi = &n;
    *pi = 456;

    printf("n = %d\n", n);

    // ===================================
    // Zeigerarithmetik

    // pi++;
    pi = pi + 1;  // Auch hier werden 4 Bytes auf die Adresse dazu gezählt
                  // 1 steht für sizeof (int)

    pi--;

    // geht das: Ja, das geht -- ist aber FALSCH / UNZULÄSSIG
    *pi = 789;


    char ch = 'A';

    int tmp = sizeof(char);

    char* cp = &ch;

    cp++;   // weil sizeof (char) == 1

}
