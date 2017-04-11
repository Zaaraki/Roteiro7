//
// Created by amaro on 10/04/2017.
//

#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario::Funcionario(int matricula, const string &nome, float salario) : matricula(matricula),
nome(nome), salario(salario) {}

void Funcionario::setMatricula(int matricula){
    Funcionario::matricula=matricula;
}

void Funcionario::setNome(const string &nome) {
    Funcionario::nome=nome;
}

void Funcionario::setSalario(float salario) {
    Funcionario::salario=salario;
}

int Funcionario::getMatricula() const {
    return matricula;
}

string Funcionario::getNome() const {
    return nome;
}

float Funcionario::getSalario() const {
    return salario;
}