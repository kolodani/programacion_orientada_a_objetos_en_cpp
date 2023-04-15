#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
};

int main()
{
    // sin punteros
    Persona p = Persona();
    p.nombre = "Daniel";
    p.edad = 33;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;

    // con punteros
    Persona *p2 = new Persona();
    p2->nombre = "Grover";
    p2->edad = 25;
    cout << "Nombre: " << p2->nombre << endl;
    cout << "Edad: " << p2->edad << endl;
}