#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    // Persona(string n, int e) : nombre(n), edad(e) {};
    Persona(string n, int e)
    {
        nombre = n;
        edad = e;
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
    Persona *p = new Persona("Grover", 25);
    Persona *p2 = new Persona("Daniel", 33);

    p->saludar();
    p2->saludar();
}