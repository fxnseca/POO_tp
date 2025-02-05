#include <iostream>
#include <string>
#include <cstdlib> //pra rand()
#include <ctime> //pra time()

#include "unidade.h"
#include "exercito.h"

using namespace std;

Exercito::Exercito(string nome){
    this->nome = nome;
    vitorias = 0;
    derrotas = 0;
    empates = 0;
}

Exercito:: ~Exercito(){}

//talvez uma função historico de batalhas

void Exercito:: adicionarUnidade(Unidade*){}

string Exercito:: getResultados() const{
    return "\n=> Vitórias: " + to_string(vitorias) + "\n=> Derrotas: " + to_string(derrotas) + "\n=> Empates: " + to_string(empates);  
} 

//talvez fazer um vetor de unidades e calcular
// as estatísticas aqui, não no construtor ou método adicionarUnidade()
void Exercito:: imprimeUnidades(){
    cout << "==> UNIDADES DO EXERCITO <==" << nome << endl;
    for(Unidade* unidade : unidades){
        unidade->print(); //conferir se é isso mesmo
    }
    cout << endl;
}
