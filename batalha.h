#ifndef BATALHA_H
#define BATALHA_H
#include <iostream>
// #include <vector>

#include "exercito.h"
#include "unidade.h"
#include "Date.h"

using namespace std;

class Date;

class Batalha {
    Date* data; 
    Exercito* exercitoA;
    Exercito* exercitoB;
    int resultadoA, resultadoB;

public:
    Batalha();
    ~Batalha();
    void ataqueExercitoA();
    void ataqueExercitoB();
    string getResultado();
};

#endif