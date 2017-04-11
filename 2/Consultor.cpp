//
// Created by amaro on 10/04/2017.
//

#include "Consultor.h"

Consultor::Consultor(int matricula, const string &nome, float salario, float bonus)
: Funcionario(matricula, nome, salario), bonus(bonus){}

float Consultor::getSalario() const {
    return salario + (salario * bonus/100);
}

float Consultor::getSalario(float porcentagem) const {
    return salario + (salario * porcentagem/100);
}