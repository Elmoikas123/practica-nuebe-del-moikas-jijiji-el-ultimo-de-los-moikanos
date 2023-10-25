// tarea de c mas mas jiijijiji practica 09.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
struct Nodo {
    int dato;
    Nodo* siguiente;
};

void agregarNodo(Nodo*& cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    }

    else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
}
void imprimirlista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;

    }
    cout << endl;

}
void borrarLista(Nodo* cabeza) {
    while (cabeza != nullptr) {
        Nodo* siguiente = cabeza->siguiente;
        delete cabeza;
        cabeza = siguiente;
        cout << "elemento borrado";
    }
}


int main()
{
    Nodo* cabeza = nullptr;
    int tamanoLista;
    cout << "Ingrese la cantidad de elementos que desea agregar a la lista:";
    cin >> tamanoLista;

    if (tamanoLista <= 0) {
        cout << "Cantidad de elementos no valida" << endl;
        return 1;
    }
    for (int i = 0; i < tamanoLista; i++) {
        int valor;
        cout << "ingrese dato" << i + 1 << ": ";
        cin >> valor;

        agregarNodo(cabeza, valor);

    }
    cout << "Imprimiendo Lista de numeros" << endl;
    imprimirlista(cabeza);

    borrarLista(cabeza);

    cout << "\n" "Este codigo fue hecho por MOI el sexoso" << endl;

    return 0;

}