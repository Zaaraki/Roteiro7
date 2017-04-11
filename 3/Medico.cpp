#include "Medico.h"

    Medico::Medico(){}

    Medico::Medico(string n, float a, float p, string nc){
            setNome(n);
            setAltura(a);
            setPeso(p);
            setNomeCurso(nc);
    }

    void Medico::setNome(string n){
        nome = n;
    }

    void Medico::setAltura(float a){
        altura = a;
    }

    void Medico::setPeso(float p){
        peso = p;
    }

     void Medico::setNomeCurso(string nc){
        nomeCurso = nc;
    }

    string Medico::getNome(){
        return nome;
    }

    float Medico::getAltura(){
        return altura;
    }

    float Medico::getPeso(){
        return peso;
    }

    string Medico::getNomeCurso(){
        return nomeCurso;
    }

