//
// Created by amaro on 10/04/2017.
//

#include "Circulo.h"

Circulo::Circulo(const string &nome, double raio, double PI) : FiguraGeometrica(nome), raio(raio), PI(PI){}

double Circulo::calcularArea() const {
    return PI * (raio * raio);
}