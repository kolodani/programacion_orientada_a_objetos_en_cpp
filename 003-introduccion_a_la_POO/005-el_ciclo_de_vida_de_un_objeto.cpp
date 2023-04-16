#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    string nombre;
    int edad;
    Persona(string n)
    {
        nombre = n;
    };
    ~Persona()
    {
        cout << "Destructor" << endl;
    };
    void saludar()
    {
        cout << "Hola, mi nombre es " << nombre << endl;
    }
};

int main()
{
    Persona *p = new Persona("Grover");
    Persona *p2 = new Persona("Daniel");

    delete p2;

    p->saludar();
}