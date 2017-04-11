#include "Trabalhador.h"

    void Trabalhador::setNome(string n){
        nome = n;
    }

    void Trabalhador::setSalario(float s){
        salario = s;
    }

    string Trabalhador::getNome(){
        return nome;
    }

    float Trabalhador::getSalario(){
        return salario;
    }
