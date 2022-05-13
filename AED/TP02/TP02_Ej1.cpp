#include <iostream>
using namespace std;

bool esBisiesto(int anio){
    if (((anio%4==0) && (anio%100 !=0)) || (anio%400==0)){
        cout << "Es bisiesto" << endl;
        return 1;
    }else{
        cout << "No es bisiesto" << endl;   
        return 0; 
    }
}

int main(void){
    int anio;
    cout << "Ingrese un anio: ";
    cin >> anio;
    esBisiesto(anio);
    return 0;
}
