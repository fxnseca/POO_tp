#include <iostream>
#include <string>
#include "unidade.h"
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(){
    poderAtaque = rand() % 41 + 40;
    blindagem = rand() % 31 + 40;
    potenciadeFogo = rand() % 21 + 30;
}

Veiculo::~Veiculo(){}

int Veiculo::getPoderAtaque(){
    return ((poderAtaque * 5) + (blindagem * 4) + (potenciadeFogo * 1)) / 10;
}

void Veiculo::print() {
    cout << endl << "==> VEICULO <==" << endl;
    cout << "=> Poder de Ataque: " << poderAtaque << endl;
    cout << "=> Blindagem: " << blindagem << endl;
    cout << "=> Potencia de fogo: " << potenciadeFogo << endl;
}