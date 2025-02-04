#include <iostream>
#include <ctime> //pra data, não sei se precisa

using namespace std;

class Date {
    int dia;
    int mes;
    int ano;

public:
    string formatarData(){  //saber o que é to_string
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    }
};