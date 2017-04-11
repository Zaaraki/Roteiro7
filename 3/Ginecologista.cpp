#include "Ginecologista.h"

    Ginecologista:: Ginecologista(){}

    Ginecologista:: Ginecologista(string n, float a, float p, string nc){
        setNome(n);
        setAltura(a);
        setPeso(p);
        setNomeCurso(nc);
    }

    string  Ginecologista::getProcedimento(){
        string retorno = "realiza atendimento as terca, quinta e sexta-feiras, de 09:00 as 15:00 horas";
        return retorno;
    }
