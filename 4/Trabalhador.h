#ifndef TRABALHADOR_H_INCLUDED
#define TRABALHADOR_H_INCLUDED

#include <iostream>

using namespace std;

class Trabalhador {

private:
    string nome;
    float salario;

public:
    void setNome(string n);
    void setSalario(float s);
    string getNome();
    float getSalario();
};

#endif // TRABALHADOR_H_INCLUDED
