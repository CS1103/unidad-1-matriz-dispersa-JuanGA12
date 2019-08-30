#include "Matriz.h"

using namespace std;

// Todos los valores a 0.
Matriz::Matriz(): matriz{nullptr}, filas {0}, columnas{0} {

}

// Crear matriz
Matriz::Matriz(int f, int c): filas {f}, columnas{c} {
    matriz = new int*[filas];
    for (int i= 0 ; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
}

// Destructor
Matriz::~Matriz() {

}

// Llenar matriz
void Matriz::llenar(){


}

// Imprimir matriz
void Matriz::imprimir(){



}

// Sumar matrices
void Matriz::sumar(const Matriz& Matriz1){


}

// Multiplicar matrices
void Matriz::multiplicar(const Matriz &, const Matriz &) {



}

// Producto Punto
void Matriz::escalar(const Matriz &) {


}

// Trasposición de matriz
void Matriz::transposicion(const Matriz &) {


}
