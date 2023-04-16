#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    static int numero_animales;
    string alimento;

public:
    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
    string obtenerAlimento()
    {
        return alimento;
    };
    void comer(Animal *a)
    {
        cout << "Este animal esta comiendo " << a->alimento << "... ñom ñom" << endl;
    };
};

int Animal::numero_animales = 0;

Animal::Animal()
{
    cout << "Creando nuevo animal..." << endl;
    numero_animales++;
}

Animal::~Animal()
{
    cout << "Borrando animal..." << endl;
    numero_animales--;
}

int Animal::obtenerNumeroAnimales()
{
    return numero_animales;
}

class Herbivoro : public Animal
{
public:
    Herbivoro() : Animal()
    {
        this->alimento = "plantas";
    }
    void Pastar()
    {
        cout << "Este animal esta pastando" << endl;
    }
};

class Carnivoro : public Animal
{
public:
    Carnivoro() : Animal()
    {
        this->alimento = "carne";
    }
    void Cazar()
    {
        cout << "Este animal esta cazando" << endl;
    }
};

class Omnivoro : public Herbivoro, public Carnivoro
{
public:
    Omnivoro() : Herbivoro(), Carnivoro() {}
    void comer()
    {
        cout << "Este animal come lo que sea" << endl;
    }
};

int main()
{
    Animal *a = new Animal();
    Herbivoro *h = new Herbivoro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;

    //a->comer();

    h->Pastar();
    //h->comer();
    a->comer(h);

    c->Cazar();
    //c->comer();
    a->comer(c);

    o->comer();

    delete a;
    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
}