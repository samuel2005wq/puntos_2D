#include <iostream>
#include <string>
#include <sstream>
#include "point2d.h"
using namespace std;

int main()
{
    std::string input;
    double x1, y1, x2, y2;

    // Leer el primer punto
    std::cout << "Introduce las coordenadas del primer punto (x1 y y1), o presiona Enter para dejarlo vacío: ";
    std::getline(std::cin, input); // Leer la línea completa

    point2d p1(0.0, 0.0); // Punto vacío por defecto

    if (!input.empty()) // Si la entrada no está vacía
    // Separa las coordenadas x1 y y1 y las asigna a x1 y y1
    {
        std::istringstream ss(input); // Usar istringstream para separar las coordenadas
        if (ss >> x1 >> y1)           // Intenta leer las coordenadas
        {
            p1 = point2d(x1, y1); // Asigna las coordenadas al punto
        }
        else
        {
            std::cout << "Entrada no válida. Se usará un punto vacío.\n";
        }
    }
    else
    {
        std::cout << "Punto vacío asignado.\n";
    }

    // Leer el segundo punto
    std::cout << "Introduce las coordenadas del segundo punto (x2 y y2), o presiona Enter para dejarlo vacío: ";
    std::getline(std::cin, input); // Leer la línea completa

    point2d p2(0.0, 0.0); // Punto vacío por defecto

    if (!input.empty())
    {
        std::istringstream ss(input); // Usar istringstream para separar las coordenadas
        if (ss >> x2 >> y2)           // Intenta leer las coordenadas
        {
            p2 = point2d(x2, y2); // Asigna las coordenadas al punto
        }
        else
        {
            std::cout << "Entrada no válida. Se usará un punto vacío.\n";
        }
    }
    else
    {
        std::cout << "Punto vacío asignado.\n";
    }

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
