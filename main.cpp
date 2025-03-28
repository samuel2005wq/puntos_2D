#include <iostream>
#include <string>
#include "point2d.h"
using namespace std;

int main()
{
    // Se declaran las variables
    double x1, y1, x2, y2;

    // Se piden los valores al usuario
    cout << "Introduce las coordenadas del primer punto (x1 y y1): ";
    cin >> x1 >> y1;

    cout << "Introduce las coordenadas del segundo punto (x2 y y2): ";
    cin >> x2 >> y2;

    // Se crea un objeto de la clase point2d
    point2d p1(x1, y1);
    point2d p2(x2, y2);

    // Se imprime el resultado
    cout << "Puntos creados:" << endl;
    cout << "Punto 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Punto 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    // Se realizan las operaciones algebraicas
    cout << "Operaciones algebraicas:" << endl;
    cout << "Suma: (" << (p1 + p2).getX() << ", " << (p1 + p2).getY() << ")" << endl;
    cout << "Resta: (" << (p1 - p2).getX() << ", " << (p1 - p2).getY() << ")" << endl;
    cout << "Multiplicación: (" << (p1 * p2).getX() << ", " << (p1 * p2).getY() << ")" << endl;
    cout << "División: (" << (p1 / p2).getX() << ", " << (p1 / p2).getY() << ")" << endl;

    // Se imprimen los resultados de las operaciones
    cout << "Punto medio: (" << p1.puntoMedio(p2).getX() << ", " << p1.puntoMedio(p2).getY() << ")" << endl;
    cout << "Distancia entre los puntos: " << p1.distancia(p2) << endl;
    cout << "Distancia al origen del primer punto: " << p1.distanciaAlOrigen() << endl;
    cout << "Distancia al origen del segundo punto: " << p2.distanciaAlOrigen() << endl;
    cout << "Punto unitario del primer punto: (" << p1.puntoUnitario().getX() << ", " << p1.puntoUnitario().getY() << ")" << endl;
    cout << "Punto unitario del segundo punto: (" << p2.puntoUnitario().getX() << ", " << p2.puntoUnitario().getY() << ")" << endl;

    // Se realizan las comparaciones
    cout << "Comparación igual: " << (p1 == p2 ? "p1 == p2" : "p1 != p2") << endl;
    cout << "Comparación menor o igual: " << (p1 <= p2 ? "p1 <= p2" : "p1 > p2") << endl;
    cout << "Comparación mayor o igual: " << (p1 >= p2 ? "p1 >= p2" : "p1 < p2") << endl;
    cout << "Comparación menor: " << (p1 < p2 ? "p1 < p2" : "p1 >= p2") << endl;
    cout << "Comparación mayor: " << (p1 > p2 ? "p1 > p2" : "p1 <= p2") << endl;
    cout << "Comparación diferente: " << (p1 != p2 ? "p1 != p2" : "p1 == p2") << endl;

    return 0;
}
