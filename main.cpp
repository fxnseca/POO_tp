#include <iostream>
#include <string>
#include <cstdlib> //pra rand()
#include <ctime> //pra time()

#include "unidade.h"
#include "infantaria.h"
#include "veiculo.h"
#include "aeronave.h"
#include "Date.h"

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    Unidade* unidade = new Unidade();
    Infantaria* infantaria = new Infantaria();
    Veiculo* veiculo = new Veiculo();
    Aeronave* aeronave = new Aeronave();

    unidade->somaDestruicao();

    unidade->print();
    
    infantaria->print();
    cout << "1. PODER DE ATAQUE INFANTARIA: " << infantaria->getPoderAtaque() << endl;

    veiculo->print();
    cout << "2. PODER DE ATAQUE VEICULO: " << veiculo->getPoderAtaque() << endl;
    
    aeronave->print();
    cout << "3. PODER DE ATAQUE AERONAVE: " << aeronave->getPoderAtaque() << endl;

    delete infantaria;
    delete veiculo;
    delete aeronave;
    delete unidade;
    return 0;
}