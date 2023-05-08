#include <iostream>

using namespace std;

class Persona {
   private:
    char nombre[40];
    int  edad;

   public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};

void Persona::inicializar() {
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout << "Ingrese edad:";
    cin >> edad;
}

void Persona::imprimir() {
    cout << "Nombre:";
    cout << nombre;
    cout << "\n";
    cout << "Edad:";
    cout << edad;
    cout << "\n";
}

void Persona::esMayorEdad() {
    if (edad >= 18) {
        cout << "Es mayor de edad.";
    } else {
        cout << "No es mayor de edad.";
    }
    cout << "\n";
}

int main() {
    Persona persona1;
    Persona persona2;
    persona1.inicializar();
    persona1.imprimir();
    persona1.esMayorEdad();
    persona2.inicializar();
    persona2.imprimir();
    persona2.esMayorEdad();
    return 0;
}
