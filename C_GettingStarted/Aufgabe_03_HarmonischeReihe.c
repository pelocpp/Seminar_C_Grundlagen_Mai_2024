// =====================================================================================
// HarmonischeReihe.c
// =====================================================================================

#include <stdio.h>

static double harmonic_series_01(int n)
{
    // mit while-Schleife
    
    int m = 1;
    double ergebnis = 0.0;
    
    while (m <= n)
    {
        ergebnis = ergebnis + 1.0 / (double) m;

        m++; // m = m + 1
    }

    return ergebnis;

    //printf("Ergebnis: %f", ergebnis);
}

static double harmonic_series_02(int n)
{
    // mit for-Schleife

    double ergebnis = 0.0;

    for (int m = 1; m <= n; m++)
    {
        ergebnis = ergebnis + 1.0 / (double) m;
    }

    return ergebnis;
}

void exercise_harmonische_reihe()
{
    // obere Grenze 
    int n = 0;

    printf("Bitte wert eingeben: ");
    scanf_s("%d", &n);

    double value = harmonic_series_01(n);
    printf("Ergebnis: %f\n", value);

    value = harmonic_series_02(n);
    printf("Ergebnis: %f\n", value);
}

// =====================================================================================
// End-of-File
// =====================================================================================
