#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED

#include <iostream>
#include "Medico.h"

using namespace std;

class Cirurgiao:public Medico{

public:

    Cirurgiao();
    Cirurgiao(string n, float a, float p, string nc);
    string getProcedimento();
};

#endif // CIRURGIAO_H_INCLUDED
