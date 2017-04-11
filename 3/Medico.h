#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED

#include <iostream>

using namespace std;

class Medico {

private:
    string nome;
    float altura;
    float peso;
    string nomeCurso;

public:

    Medico();
    Medico(string n, float a, float p, string nc);
    void setNome(string n);
    void setAltura(float a);
    void setPeso(float p);
    void setNomeCurso(string nc);
    string getNome();
    float getAltura();
    float getPeso();
    string getNomeCurso();
};

#endif // MEDICO_H_INCLUDED
