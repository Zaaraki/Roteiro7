//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_CONSULTOR_H
#define ROTEIRO7_CONSULTOR_H

#include "Funcionario.h"


class Consultor : public Funcionario{
private:
    float bonus;

public:
    Consultor(int matricula, const string &nome, float salario, float bonus);
    float getSalario() const ;
    float getSalario(float porcentagem) const;

};


#endif //ROTEIRO7_CONSULTOR_H
