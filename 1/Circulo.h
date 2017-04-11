//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_CIRCULO_H
#define ROTEIRO7_CIRCULO_H

#include "FiguraGeometrica.h"
class Circulo : public FiguraGeometrica{
private:
    double raio;
    float PI;


public:
    Circulo(const string &nome, double raio, double PI);
    virtual double calcularArea() const;
};


#endif //ROTEIRO7_CIRCULO_H
