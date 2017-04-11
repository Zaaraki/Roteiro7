#ifndef TRABALHADORPORHORA_H_INCLUDED
#define TRABALHADORPORHORA_H_INCLUDED

#include <iostream>
#include "Trabalhador.h"

class TrabalhadorPorHora:public Trabalhador{

public:
    TrabalhadorPorHora();
    TrabalhadorPorHora(string n, float s);
    float calcularPagamento(int h);
};

#endif // TRABALHADORPORHORA_H_INCLUDED
