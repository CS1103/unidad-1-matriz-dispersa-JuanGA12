#include "Matriz.h"

using namespace std;

// Todos los valores a 0.
Matriz::Matriz(): matriz{nullptr}, filas {0}, columnas{0} {

}

// Crear matriz
Matriz::Matriz(int f, int c): filas {f}, columnas{c} {

    try {
        if( filas <= 0 || columnas <= 0){
            throw logic_error("No existe matriz con 0 o negativas filas o con 0 o negativas columnas");
        }
    }
    catch (std::exception& e){
        cout<<e.what()<<endl;
    }

    matriz = new int*[filas];
    for (int i= 0 ; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
}

// Llenar matriz
void Matriz::llenar(){

    try{
        if ( filas != columnas){
            throw logic_error("No son matrices cuadradas");
        } else{
            for ( int i = 0; i < filas; i++) {
                for (int j = 0; j < columnas; j++) {
                    matriz[i][j] = (rand() % 3);
                }
            }
        }
    }
    catch (std::exception& e){
        cout<<e.what()<<endl;
    }



}

// Imprimir matriz
void Matriz::imprimir(){

    try{
        if ( filas != columnas){
            throw logic_error("No son matrices cuadradas");
        } else{
            for ( int i = 0; i < filas; i++) {
                for (int j = 0; j < columnas; j++) {
                    cout<<matriz[i][j]<<" ";
                }
                cout << endl;
            }
        }
    }
    catch (std::exception& e){
        cout<<e.what()<<endl;
    }
    cout << endl;
}

// Producto Punto
void Matriz::escalar(const Matriz& M1, int num) {

    Matriz temp(M1);
    for (int i = 0; i < M1.filas ; ++i) {
        for (int j = 0; j < M1.columnas; ++j) {
            matriz[i][j] = num*temp.matriz[i][j];
        }
    }
}

// Trasposición de matriz
void Matriz::transposicion(const Matriz& M1) {
    Matriz temp(M1);
    for (int i = 0; i < M1.filas; ++i) {
        for (int j = 0; j < M1.columnas; ++j) {
            matriz[i][j] = temp.matriz[j][i];
        }
    }

}

// Sobrecarga de operador +
Matriz Matriz::operator+(const Matriz& M1){

    Matriz temporal(M1);
      for(int i = 0; i < M1.filas; i++){
        for (int j = 0; j < M1.columnas; j++) {
          temporal.matriz[i][j] += this->matriz[i][j];
        }
      }

      return temporal;
}

// Sobrecarga operador *
Matriz Matriz::operator*(const Matriz& M1){

    auto temporal = new Matriz(filas, columnas);
    for(int i = 0; i < filas; i++){
        for(int j = 0; j <  columnas; ++j){
            for(int z=0; z < columnas; ++z){
                temporal->matriz[i][j] += this->matriz[i][z] * M1.matriz[z][j];
              }
            }
          }
    return *temporal;
}

// Sobrecarga operador =
Matriz& Matriz::operator=(const Matriz & M1) {

    if(this->filas !=0 && this->columnas!=0){
        delete [] this->matriz;
    }

    this->filas = M1.filas;
    this->columnas = M1.columnas;

    this->matriz = new int*[this->filas];

    for (int i = 0; i < this->filas; ++i) {
        this->matriz[i] = new int[this->columnas];
        for (int j = 0; j < this->columnas; ++j) {
            this->matriz[i][j] = M1.matriz[i][j];
        }

    }
    return *this;
}


