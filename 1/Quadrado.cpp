//
// Created by amaro on 10/04/2017.
//

#include "Quadrado.h"

Quadrado::Quadrado(const string &nome, double lado) : FiguraGeometrica(nome), lado(lado) {}

double Quadrado::calcularArea() const {
    return lado*lado;
}