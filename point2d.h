#ifndef POINT2D_H
#define POINT2D_H

#include <cmath>

class point2d
{
private:
    double x;
    double y;

public:
    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(double x);
    void setY(double y);

    // Constructor
    point2d();                           // Constructor por defecto con inicialización
    point2d(const point2d &p);           // Copy constructor
    point2d(double x = 0, double y = 0); // Constructor with parameters

    // Sobrecarga de operadores
    point2d operator+(const point2d &p) const; // Suma
    point2d operator-(const point2d &p) const; // Resta
    point2d operator*(const point2d &p) const; // Multiplicación
    point2d operator/(const point2d &p) const; // División

    // Comparación
    bool operator<=(const point2d &p) const; // Menor o igual
    bool operator>=(const point2d &p) const; // Mayor o igual
    bool operator==(const point2d &p) const; // Igual
    bool operator!=(const point2d &p) const; // Diferente
    bool operator<(const point2d &p) const;  // Menor
    bool operator>(const point2d &p) const;  // Mayor

    // Operador de asignación
    point2d &operator=(const point2d &p); // Asignación

    // Métodos adicionales
    point2d puntoMedio(const point2d &p) const; // Punto medio entre dos puntos
    double distancia(const point2d &p) const;   // Distancia entre dos puntos
    double distanciaAlOrigen() const;           // Distancia al origen
    point2d puntoUnitario() const;              // Punto unitario
};

#endif
