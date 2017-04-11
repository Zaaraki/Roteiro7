//
// Created by amaro on 10/04/2017.
//

#include "Triangulo.h"

Triangulo::Triangulo(const string &nome, double base, double altura): FiguraGeometrica(nome), base(base), altura(altura) {}

double Triangulo::calcularArea() const {
    return (base*altura)/2;
}