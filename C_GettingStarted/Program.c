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

int main_hello_world()
{
    printf("Hello World\n");

    printf("Ausgabe: %d\n", Maximum );   // Preprocessor: Maximum => 100

    return 1;
}

void main()
{
    test_09();
}
