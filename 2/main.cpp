//
// Created by amaro on 10/04/2017.
//

#include <stdlib.h>
#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
    Funcionario f1(1, "Amaro Neto", 4000);
    cout << "Matricula: " << f1.getMatricula() << "; Nome: "<< f1.getNome() << "; Salario: $ " << f1.getSalario() << endl;

    Consultor c1(2, "Apollo", 3000, 10);
    cout << "Matricula: " << c1.getMatricula() << "; Nome: "<< c1.getNome() << "; Salario: $ " << c1.getSalario() << endl;

    cout << "Porcentagen de 40%.." << endl;
    cout << "Matricula: " << c1.getMatricula() << "; Nome: "<< c1.getNome() << "; Salario: $ " << c1.getSalario(40) << endl;

    cout << "Novo salario..." << endl;
    f1.setSalario(50000);
    c1.setSalario(5000);

    cout << "Matricula: " << f1.getMatricula() << "; Nome: "<< f1.getNome() << "; Salario: $ " << f1.getSalario() << endl;
    cout << "Matricula: " << c1.getMatricula() << "; Nome: "<< c1.getNome() << "; Salario: $ " << c1.getSalario() << endl;

};