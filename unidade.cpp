#include <iostream>
#include <string>
#include <cstdlib> //pra rand()
#include <ctime> //pra time()

#include "unidade.h"
#include "veiculo.h"
#include "infantaria.h"
#include "aeronave.h"
#include "Date.h"

using namespace std;

Unidade::Unidade() {
    poderAtaque = rand() % 101;
    destruicoes = 0;
}
Unidade:: ~Unidade(){};
int Unidade::getPoderAtaque(){
    return poderAtaque;
}
void Unidade:: setPoderAtaque(int poderAtaque){
    if(poderAtaque >=0 && poderAtaque <= 100)
        this->poderAtaque = poderAtaque;
}
void Unidade:: somaDestruicao(){
    destruicoes++;
    cout << "=> Destruições: " << destruicoes << endl;
}
void Unidade:: print(){
    cout << "--------------- UNIDADE ---------------" << endl;
    // cout << "=> NOME DA UNIDADE:" << << endl;
    cout << " => PODER DE ATAQUE GERAL: (aleatorio)" << poderAtaque << endl;
}
