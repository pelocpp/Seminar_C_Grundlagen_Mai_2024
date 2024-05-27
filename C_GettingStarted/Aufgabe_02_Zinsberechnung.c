// =====================================================================================
// Zinsberechnung.c
// =====================================================================================

#include <stdio.h>

void exercise_zinsberechnung()
{
    double capitalStock = 1000;
    double startCapitalStock = capitalStock;
    double interestRate = 5.0;
    int    numberYears  = 10;

    printf("Zinstabelle fuer Grundkapital %.2f\n", capitalStock);
    printf("Verzinsung:                   %.2f\n", interestRate);
    printf("=====================================\n");
    printf("Kapitalstand zum Jahresende:\n\n");

    int year = 0;

    while (year < numberYears)
    {
        double interest = (capitalStock / 100.0) * interestRate;

        // auf addieren        
        capitalStock = capitalStock + interest;

        // es gibt eine kuerzere Schreibweise fuer die letzte Zeile:
        // capitalStock += interest;

        printf("Jahr: %2d    Kapital: %.2f\n", (year+1), capitalStock);

        ++year;
    }

    printf("\nAus %.2f Grundkapital wurden in %d Jahren %.2f Euro.\n", 
        startCapitalStock, year, capitalStock);
}

// =====================================================================================
// End-of-File
// =====================================================================================
