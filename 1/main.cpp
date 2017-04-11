#include <iostream>
#include <stdlib.h>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main() {
    Triangulo t1("Triangulo", 20, 10);

    Quadrado q1("Quadrado", 10);

    Circulo c1("Circulo", 5, 3.1416);

    cout<<"Area de " <<  t1.getNome() << "= " << t1.calcularArea()<<endl;
    cout<<"Area de " <<  q1.getNome() << "= " << q1.calcularArea()<<endl;
    cout<<"Area de " <<  c1.getNome() << "= " << c1.calcularArea()<<endl;
    return 0;
}