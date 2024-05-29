// Header-Datei

// ====================================
// defines

#pragma once

#define Max 100

// ====================================
// types (structs)

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// ====================================
// function prototypes

void initTime(struct Time* time, int hours, int minutes, int seconds);
void printTime(struct Time* time);

