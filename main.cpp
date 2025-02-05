#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> //pra rand()
#include <ctime> //pra time()

#include "Date.h"
#include "campanha.h"
#include "batalha.h"
#include "exercito.h"
#include "unidade.h"
#include "infantaria.h"
#include "veiculo.h"
#include "aeronave.h"

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    //Declarar Date aqui
    // Exercito* exercito = new Exercito("Exercito 1"); //exemplo
    Unidade* unidade = new Unidade();

    vector<Infantaria*> infantarias;
    infantarias.push_back(new Infantaria());
    infantarias.push_back(new Infantaria());

    vector<Veiculo*> veiculos;
    veiculos.push_back(new Veiculo());
    veiculos.push_back(new Veiculo());
    
    Aeronave* aeronave = new Aeronave();

    unidade->somaDestruicao();
    unidade->print();

    int resultadoUnidade = 0;
    int resulInf = 0;
    int resulVeic = 0;
    size_t index = 1;   
    
    for (Infantaria* inf : infantarias){
        cout << endl << "==> INFANTARIA " << index << " <==" << endl;
        inf->print();
        resulInf += inf->getPoderAtaque();
        index++;
    }
    cout << "1. PODER DE ATAQUE TOTAL DE INFANTARIA: " << resulInf << endl;

    for(Veiculo* veic : veiculos){
        cout << endl << "==> VEICULO " << index << " <==" << endl;
        veic->print();
        resulVeic += veic->getPoderAtaque();
        index++;
    }
    cout << "2. PODER DE ATAQUE TOTAL DE VEICULO: " << resulVeic << endl;

    aeronave->print();
    cout << "3. PODER DE ATAQUE TOTAL DE AERONAVE: " << aeronave->getPoderAtaque() << endl;

    resultadoUnidade = aeronave->getPoderAtaque() + resulVeic + resulInf;
    cout << endl <<"==> PODER DE ATAQUE TOTAL DA UNIDADE: " << resultadoUnidade << endl;

    // delete exercito;
    //DESALOCANDO AS MEMORIAS:
    for (Infantaria* inf : infantarias) {
        delete inf;
    }
    for(Veiculo* veic : veiculos){
        delete veic;
    }
    delete aeronave;
    delete unidade;
    
    return 0;
}