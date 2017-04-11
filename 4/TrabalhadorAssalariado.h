#ifndef TRABALHADORASSALARIADO_H_INCLUDED
#define TRABALHADORASSALARIADO_H_INCLUDED

#include <iostream>
#include "Trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador{

public:
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(string n, float s);
    float calcularPagamento();
};

#endif // TRABALHADORASSALARIADO_H_INCLUDED
