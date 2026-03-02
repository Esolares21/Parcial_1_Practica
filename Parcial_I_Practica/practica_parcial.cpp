#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    string nombreCompleto = "Erix Alejandro Solares Flores";

    Nodo* nodo1 = new Nodo();
    Nodo* nodo2 = new Nodo();
    Nodo* nodo3 = new Nodo();

    cout << "========================================" << endl;
    cout << " Estudiante: " << nombreCompleto << endl;
    cout << "========================================" << endl;

    cout << "Por favor, ingresa el valor para el primer nodo: ";
    cin >> nodo1->dato;

    cout << "Por favor, ingresa el valor para el segundo nodo: ";
    cin >> nodo2->dato;

    cout << "Por favor, ingresa el valor para el tercer nodo: ";
    cin >> nodo3->dato;

    nodo1->siguiente = nodo2;
    nodo2->siguiente = nodo3;
    nodo3->siguiente = nullptr;

    cout << "\n--- Valores almacenados en la lista ---" << endl;

    cout << "Nodo 1: " << nodo1->dato << endl;
    cout << "Nodo 2: " << nodo1->siguiente->dato << endl;
    cout << "Nodo 3: " << nodo1->siguiente->siguiente->dato << endl;

    delete nodo1;
    delete nodo2;
    delete nodo3;


    return 0;
}