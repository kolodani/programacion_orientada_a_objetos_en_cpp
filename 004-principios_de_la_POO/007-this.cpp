#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
    ~Persona()
    {
        cout << "Destructor" << endl;
    }
    Persona &establecerNombre(string nombre)
    {
        this->nombre = nombre;
        return *this;
    }
    Persona &establecerEdad(int edad)
    {
        this->edad = edad;
        return *this;
    }
    void saludar()
    {
        cout << "Hola, Mi nombre es " << nombre << ", Y mi edad es " << edad << endl;
    }
};

int main()
{
    Persona *p = new Persona("Grover", 25);
    /*
    p->establecerNombre("Guillermo");
    p->establecerEdad(30);
    */
    p->establecerNombre("Guillermo").establecerEdad(30).establecerNombre("Grover");
    p->saludar();
}