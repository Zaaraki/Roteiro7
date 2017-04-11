#ifndef OTORRINO_H_INCLUDED
#define OTORRINO_H_INCLUDED

#include <iostream>
#include "Medico.h"

using namespace std;

class Otorrino:public Medico{

public:
    Otorrino();
    Otorrino(string n, float a, float p, string nc);
    string getProcedimento();
};

#endif // OTORRINO_H_INCLUDED
