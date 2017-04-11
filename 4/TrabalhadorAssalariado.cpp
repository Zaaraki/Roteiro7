#include "TrabalhadorAssalariado.h"

    TrabalhadorAssalariado::TrabalhadorAssalariado(){}

    TrabalhadorAssalariado::TrabalhadorAssalariado(string n, float s){
        setNome(n);
        setSalario(s);
    }

    float TrabalhadorAssalariado::calcularPagamento(){
        return getSalario()/4;
    }
