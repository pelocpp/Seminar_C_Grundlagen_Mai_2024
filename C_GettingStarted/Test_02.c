#include <stdio.h>    // printf

// Anweisungen und Konstrollstrukturen

void test_02()
{
    // Variablendefinitionen incl. Vorbelegungswert
    int n = 1;
    int m = 2;

    n = 3;      // Wertzuweisung  // Haltepunkt // Breakpoint
    m = 4;      // Wertzuweisung

    if ( n >= 3 && m <= 4 ) {

        printf("erfuellt\n");
    }

    n = -123;

    // Test auf Gleichheit: ==
    if (n == 123) {

        printf("erfuellt\n");
    }

    // Test auf Ungleichheit: ==
    if (n != 123) {

        printf("erfuellt\n");
    }

    // Vorsicht: 1.)
    // Synonym: n != 0
    if ( n ) {

        printf("erfuellt\n");
    }


    // Vorsicht: 2.)
    // Synonym:
    if (n = 123) {

        printf("erfuellt\n");
    }

    // ist gleich

    if ( (n = 123) != 0 ) {

        printf("erfuellt\n");
    }

    printf("bin hier\n");

    // ===============================

    n = 2;

    if (n >= 3) {

        printf("erfuellt\n"); 
        n = n + 1;
    }
    else {

        printf("nicht erfuellt\n");
    }

    // ===============================

    // Frage:

    n = 2;

    // ist nicht so performant

    if (n == 1) {
        printf("n = 1\n");
    }

    if (n == 2) {
        printf("n = 2\n");
    }

    if (n == 3) {
        printf("n = 3\n");
    }

    // VERSUS --- verglichen mit:

    if (n == 1) {
        printf("n = 1\n");
    }
    else if (n == 2) {
        printf("n = 2\n");
    }
    else if (n == 3) {
        printf("n = 3\n");
    }
}

