#ifndef GINECOLOGISTA_H_INCLUDED
#define GINECOLOGISTA_H_INCLUDED

#include <iostream>
#include "Medico.h"

using namespace std;

class Ginecologista:public Medico{

public:
    Ginecologista();
    Ginecologista(string n, float a, float p, string nc);
    string getProcedimento();
};

#endif // GINECOLOGISTA_H_INCLUDED
