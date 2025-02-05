#ifndef EXERCITO_H
#define EXERCITO_H
#include <iostream>
#include <vector>
#include "unidade.h"

using namespace std;

class Exercito {
    string nome; 
    vector<Unidade*> unidades;
    int vitorias, derrotas, empates;

public:
    Exercito(string nome);
    virtual ~Exercito();
    void adicionarUnidade(Unidade*);
    string getResultados() const; 
    void imprimeUnidades();

};

#endif