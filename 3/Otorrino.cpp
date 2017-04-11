#include "Otorrino.h"

    Otorrino:: Otorrino(){}

    Otorrino:: Otorrino(string n, float a, float p, string nc){
        setNome(n);
        setAltura(a);
        setPeso(p);
        setNomeCurso(nc);
    }

    string  Otorrino::getProcedimento(){
        string retorno = "Atende de segunda a quarta, das 15:00h as 20:00 horas";
        return retorno;
    }
