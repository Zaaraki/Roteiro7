#include "Oftalmologista.h"

    Oftalmologista:: Oftalmologista(){}

    Oftalmologista:: Oftalmologista(string n, float a, float p, string nc){
        setNome(n);
        setAltura(a);
        setPeso(p);
        setNomeCurso(nc);
    }

    string  Oftalmologista::getProcedimento(){
        string retorno = "realiza atendimento as segunda e quarta-feiras, de 09:00 as 15:00 horas";
        return retorno;
    }

