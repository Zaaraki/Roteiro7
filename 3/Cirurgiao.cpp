#include "Cirurgiao.h"

    Cirurgiao::Cirurgiao(){}

    Cirurgiao::Cirurgiao(string n, float a, float p, string nc){
        setNome(n);
        setAltura(a);
        setPeso(p);
        setNomeCurso(nc);
    }

    string Cirurgiao::getProcedimento(){
        string retorno = "realiza cirurgia as segunda e terca-feiras, de 08:00 as 15:00 horas";
        return retorno;
    }

