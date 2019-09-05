#include <iostream>
#include <cassert>
#include "Matriz.cpp"

using namespace std;

int main() {

    int filas, columnas,num;
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
    Matriz M7(filas,columnas);//auxiliar;

    M1.llenar();
    std::cout << "Matriz 1: " << '\n';
    M1.imprimir();

    M2.llenar();
    std::cout << "Matriz 2:" << '\n';
    M2.imprimir();
    M7 = M2;

    M3 = M1 + M2; //Sobrecarga operador +
    std::cout << "El resultado de la suma es: " << '\n';
    M3.imprimir();

    M4 = M1 * M2; //Sobrecarga operador *
    std::cout << "El resultado de la multiplicación es: " << '\n';
    M4.imprimir();

    M5.transposicion(M1);
    std::cout << "El resultado de la matriz traspuesta es: " << '\n';
    M5.imprimir();


    std::cout << "Ingrese numero para hacer la multiplicación escalar: ";
    std::cin >> num;

    M6.escalar(M1,num);
    std::cout<<std::endl;
    std::cout << "El resultado de la multiplicacion escalar de la matriz M1 es: " << '\n';
    M6.imprimir();

    std::cout<<"Matriz 1: "<<std::endl;
    M1.imprimir();


    std::cout<<"Matriz 2: "<<std::endl;

    M2 = M7;// para la sobre carga + y * el resultado se guarda en el segundo termino, M3 = M1 + M2, ahora el resultado de esa operacion se va a guardar en M2 y la sobreescribira,
    // es por eso que se crea un auxiliar para no perder el valor de M2.
    M2.imprimir();



    return 0;
}
