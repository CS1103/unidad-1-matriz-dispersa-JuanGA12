#include <iostream>
#include <cassert>
#include "Matriz.cpp"

using namespace std;

int main() {

    int filas, columnas;
    cout<<"Ingresar # filas: ";
    cin>>filas;
    cout<<"Ingresar # columnas: ";
    cin>>columnas;

    Matriz M1(filas,columnas);
    Matriz M2(filas,columnas);
    Matriz M3(filas,columnas);
    Matriz M4(filas,columnas);
    Matriz M5(filas,columnas);
    Matriz M6(filas,columnas);

    M1.llenar();
    std::cout << "Matriz 1: " << '\n';
    M1.imprimir();
    M2.llenar();
    std::cout << "Matriz 2:" << '\n';
    M2.imprimir();
    cout <<endl;

    M3 = M1 + M2; //Sobrecarga operador +
    std::cout << "El resultado de la suma es: " << '\n';
    M3.imprimir();
    cout <<endl;


    M4 = M1 * M2; //Sobrecarga operador *
    std::cout << "El resultado de la multiplicación es: " << '\n';
    M4.imprimir();
    cout <<endl;

    M5.transposicion(M1);
    std::cout << "El resultado de la matriz traspuesta es: " << '\n';
    M5.imprimir();
    cout <<endl;

    M6.escalar(M1,5);
    std::cout << "El resultado de la multiplicacion escalar es: " << '\n';
    M6.imprimir();
    cout <<endl;

    // operador = ?
    /*int M4 [3][3] = { {1, 2 ,3}, {4,5,6} };
    int M5 [3][3] = { {15,23,31}, {14,17,18}, {41,63,65} };
    int M6 = 20;
    int M7 [4][4] = { {1, 2,3,4}, {4,5,6,7} };



    assert(M3.sumar(M1, M2) == M4);
    assert(M3.multiplicar(M1, M2) == M5);
    assert(M3.escalar(M1, M2) == M6);
    assert(M3.transposicion(M1) == M7);

    */
    return 0;
}
