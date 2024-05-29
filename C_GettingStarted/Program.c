// Hello World in C

#include <stdio.h>

#define  Maximum 150

// Vorwärts-Deklaration  // Signaturen
void test_01();
void test_02();
void test_03();
void test_04();
void test_05();
void test_06();
void test_07();
void test_08();
void test_09();
void test_10();
void test_11();

// globale Variable 
extern int globaleVariable;

void ausgeben2()
{
    printf("Wert: %d\n", globaleVariable);
}


int main_hello_world()
{
    printf("Hello World\n");

    printf("Ausgabe: %d\n", Maximum );   // Preprocessor: Maximum => 100

    return 1;
}

void main()
{
    test_11();
}
