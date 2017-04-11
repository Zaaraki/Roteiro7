//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_FIGURAGEOMETRICA_H
#define ROTEIRO7_FIGURAGEOMETRICA_H

#include<string>

using namespace std;

class FiguraGeometrica{
private:
    string nome;

public:
    FiguraGeometrica(const string &nome);

    virtual double calcularArea() const = 0 ;

    const string &getNome() const;
};

#endif //ROTEIRO7_FIGURAGEOMETRICA_H
