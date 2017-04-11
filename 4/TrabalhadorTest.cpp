#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    TrabalhadorPorHora t1 ("Amaro", 4000.00f);
    int horasTrabalhada = 45;

    TrabalhadorAssalariado t2 ("Apollo", 2500.00f);

    cout.precision(2);
    cout<< endl;
    cout << fixed << t1.getNome() << " trabalha por hora e recebe por semana R$ " << t1.calcularPagamento(horasTrabalhada) << endl;
    cout<< endl;
    cout << fixed << t2.getNome() << " trabalha assalariado e recebe por semana R$ " << t2.calcularPagamento() << endl;

    return 0;
}
