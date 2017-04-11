//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_FUNCIONARIO_H
#define ROTEIRO7_FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
protected:
    int matricula;
    string nome;
    float salario;

public:
    Funcionario(int matricula, const string &nome, float salario);
    void setMatricula(int matricula);
    void setNome(const string &nome);
    void setSalario(float salario);
    int getMatricula() const ;
    string getNome() const ;
    float getSalario() const ;
};


#endif //ROTEIRO7_FUNCIONARIO_H
