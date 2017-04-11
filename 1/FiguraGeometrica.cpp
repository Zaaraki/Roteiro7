//
// Created by amaro on 10/04/2017.
//

#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(const string &nome) : nome(nome) {}

const string &FiguraGeometrica::getNome() const {
    return nome;
}