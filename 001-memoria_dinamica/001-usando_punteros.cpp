#include <iostream>

using namespace std;

int main()
{
    char letra = 'A';
    char *puntero = &letra;
    cout << "La letra es: " << letra << endl;
    cout << "La direccion de memoria de la letra es: " << (int *) &letra << endl;
    cout << "El puntero es: " << (int *) puntero << endl;
    cout << "El valor del puntero es: " << *puntero << endl;
}