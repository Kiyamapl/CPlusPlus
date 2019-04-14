#ifndef SEMAFOR_H
#define SEMAFOR_H
#include "iostream"

class Semafor{
    unsigned int n;
    unsigned int max;
    int* tab;
public:
    Semafor();
    Semafor(unsigned int n);
    void rezerwuj(int id);
    void zwolnij(int id);
    bool stan();
    void wypisz();
};

#endif // SEMAFOR_H
