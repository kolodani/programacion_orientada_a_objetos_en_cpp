#include <iostream>
#include <string>

using namespace std;

class Persona
{
    public:
        string nombre = "Grover";
        int edad = 25;
        void saludar()
        {
            cout << "Hola, mi nombre es " << nombre << endl;
        }
};

int main()
{
    Persona p = Persona();
    cout << "Nombre: " << p.nombre << endl;
    p.saludar();

    Persona *p2 = new Persona();
    p2->nombre = "Daniel";
    cout << "Nombre: " << p2->nombre << endl;
    p2->saludar();
}