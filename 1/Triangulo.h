//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_TRIANGULO_H
#define ROTEIRO7_TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
private:
    double base;
    double altura;
public:
    Triangulo(const string &name, double base, double altura);

    virtual double calcularArea() const;
};


#endif //ROTEIRO7_TRIANGULO_H
