using namespace std;
#include "point2d.h"

point2d::point2d() : x(0), y(0) {}                     // Constructor por defecto con inicialización
point2d::point2d(const point2d &p) : x(p.x), y(p.y) {} // Copy constructor
point2d::point2d(double x, double y) : x(x), y(y) {}   // Constructor con parámetros

double point2d::getX() const { return x; }
double point2d::getY() const { return y; }

void point2d::setX(double x) { this->x = x; }
void point2d::setY(double y) { this->y = y; }

// Sobrecarga de operadores
point2d point2d::operator+(const point2d &p) const
{
    return point2d(x + p.x, y + p.y);
}
point2d point2d::operator-(const point2d &p) const
{
    return point2d(x - p.x, y - p.y);
}
point2d point2d::operator*(const point2d &p) const
{
    return point2d(x * p.x, y * p.y);
}
point2d point2d::operator/(const point2d &p) const
{
    // Evitar división por cero
    if (p.x == 0 && p.y == 0)
        return point2d(0, 0);
    // Si p.x o p.y son cero, se evita la división
    // y se asigna el valor correspondiente a 0
    // para evitar NaN.
    return point2d(p.x != 0 ? x / p.x : 0, p.y != 0 ? y / p.y : 0);
}

bool point2d::operator<=(const point2d &p) const { return x <= p.x && y <= p.y; }
bool point2d::operator>=(const point2d &p) const { return x >= p.x && y >= p.y; }
bool point2d::operator==(const point2d &p) const { return x == p.x && y == p.y; }
bool point2d::operator!=(const point2d &p) const { return x != p.x || y != p.y; }
bool point2d::operator<(const point2d &p) const { return x < p.x && y < p.y; }
bool point2d::operator>(const point2d &p) const { return x > p.x && y > p.y; }

// Operador de asignación
point2d &point2d::operator=(const point2d &p)
{
    x = p.x;
    y = p.y;
    return *this;
}

point2d point2d::puntoMedio(const point2d &p) const
{
    return point2d((x + p.x) / 2, (y + p.y) / 2);
}
double point2d::distancia(const point2d &p) const
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
double point2d::distanciaAlOrigen() const
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

point2d point2d::puntoUnitario() const
{
    double d = distanciaAlOrigen();
    if (d == 0)
        // Evitar división por cero
        return point2d(0, 0);
    else
        // Normalizar el vector
        return point2d(x / d, y / d);
}
