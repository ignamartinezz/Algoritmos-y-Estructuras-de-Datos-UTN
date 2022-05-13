//Ejemplo de una funcion
#include <iostream>
using namespace std;

double problemas (int primero, double segundo);
//definicion de funcion

double doblemas(int primero, double segundo){ 
//Tipo de dato que devuelve, nombre de la funcion, tdato 1er parametro, identificador 1er parametro....
    primero *=2;
    return primero + segundo;
    //retorna la expresion q le sigue
}
// definicion de la funcion
int main(void){

    double resul, nro, sumando;
    resul=doblemas(nro, sumando);    
    //ejemplo de uso
    /* Tipos de pasajes:
    Por valor: parametro recibe una copia del valor del parametro real, el parametro puede ser una const una var o una expresion
    Por referencia: requiere que el parametro real sea una var, usando & (int& primero, double& segundo)
    */
    

    return 0;
}