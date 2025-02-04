#include <iostream>
#include <string>
#include "unidade.h"
#include "infantaria.h"

using namespace std;

Infantaria::Infantaria(){
    poderAtaque = rand() % 31 + 30;
    forca = rand() % 21 + 30;
    velocidade = rand() % 11 + 30;
}

Infantaria::~Infantaria() {}

int Infantaria::getPoderAtaque() { //sobrescreve a função de cima
    return ((poderAtaque * 5) + (forca * 3) + (velocidade * 2)) / 10;
}

void Infantaria::print() {
    cout << endl << "==> INFANTARIA <==" << endl;
    cout << "=> Poder de Ataque: " << poderAtaque << endl;
    cout << "=> Força: " << forca << endl;
    cout << "=> Velocidade: " << velocidade << endl;
}