#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    static int numero_personas;
    Persona(string nombre, int edad);
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
    void saludar();
};

int Persona::numero_personas = 0;
void Persona::saludar()
{
    cout << "Hola, Mi nombre es " << nombre << ", Y mi edad es " << edad << endl;
}
Persona::Persona(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
    numero_personas++;
}

int main()
{
    Persona *p = new Persona("Grover", 25);
    Persona *p2 = new Persona("Daniel", 33);
    cout << "Numero de personas: " << Persona::numero_personas << endl;
    p->establecerNombre("Guillermo").establecerEdad(30).establecerNombre("Grover");
    p->saludar();
}