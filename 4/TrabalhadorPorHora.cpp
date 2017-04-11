#include "TrabalhadorPorHora.h"

    TrabalhadorPorHora::TrabalhadorPorHora(){}

    TrabalhadorPorHora::TrabalhadorPorHora(string n, float s){
        setNome(n);
        setSalario(s);
    }

    float TrabalhadorPorHora::calcularPagamento(int h){
        float salarioPorHora = getSalario() / (4 * 40);
        float salarioSemanal;

        if(h > 40){
            salarioSemanal = (salarioPorHora * 40) + (salarioPorHora * (h-40) * 1.5f);
        } else {
            salarioSemanal = salarioPorHora * h;
        }
        return salarioSemanal;
    }
