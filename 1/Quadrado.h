//
// Created by amaro on 10/04/2017.
//

#ifndef ROTEIRO7_QUADRADO_H
#define ROTEIRO7_QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica {
private:
    double lado;

public:
    Quadrado(const string &nome, double lado);

    virtual double calcularArea() const;


};


#endif //ROTEIRO7_QUADRADO_H
