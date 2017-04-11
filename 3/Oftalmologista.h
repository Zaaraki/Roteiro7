#ifndef OFTALMOLOGISTA_H_INCLUDED
#define OFTALMOLOGISTA_H_INCLUDED

#include <iostream>
#include "Medico.h"

using namespace std;

class Oftalmologista:public Medico{

public:
    Oftalmologista();
    Oftalmologista(string n, float a, float p, string nc);
    string getProcedimento();
};

#endif // OFTALMOLOGISTA_H_INCLUDED
