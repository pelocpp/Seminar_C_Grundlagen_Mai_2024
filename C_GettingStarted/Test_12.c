#include <stdio.h>     // printf
#include <stdlib.h>    // malloc

#include "Time.h"

// Strukturen
// Beispiel: Uhrzeit : Stunden, Minuten und Sekunden


void initTime(struct Time* time, int hours, int minutes, int seconds)
{
    //time.hours = hours;
    //time.minutes = minutes;
    //time.seconds = seconds;

    // A) Passt -- etwas schwer lesbar
    (*time).hours = hours;
    (*time).minutes = minutes;
    (*time).seconds = seconds;

    // B) Eine alternative Syntax -- besser lesbar -- Symbol: "Pfeil"
    time->hours = hours;
    time->minutes = minutes;
    time->seconds = seconds;
}

void printTime(struct Time* time)
{
    printf("Uhrzeit: %d:%d:%d\n", time -> hours, time -> minutes, time -> seconds);
}

void test_bemerkung()
{
   // Aufruf von initTime :

   // 2 Möglichkeiten des AUFRUFS :

    //A) 
    struct Time time;   // STACK

    initTime(&time, 1, 2, 3);

    //B)
    struct Time* pt = malloc(sizeof(struct Time));   // HEAP

    initTime(pt, 1, 2 , 3);

    free(pt);
}

void test_12_01()
{
    struct Time jetzt = { 1, 0, 0 };

    // a) 
    //jetzt.hours = 13;
    //jetzt.minutes = 25;
    //jetzt.seconds = 33;

    // a-strich:

    initTime(&jetzt, 13, 25, 33);

    printTime(&jetzt);

    // b)
    struct Time dann = { 14, 20, 50 };

    printTime(&dann);
}

void test_12_02()
{
    struct Time jetzt = { 0, 0, 0 };

    // a) 
    jetzt.hours = 13;
    jetzt.minutes = 25;
    jetzt.seconds = 33;

    printf("Uhrzeit: %d:%d:%d\n", jetzt.hours, jetzt.minutes, jetzt.seconds);

    // b)
    struct Time dann = { 14, 20, 50 };
    printf("Uhrzeit: %d:%d:%d\n", dann.hours, dann.minutes, dann.seconds);
}


void test_12()
{
    test_12_01();
}