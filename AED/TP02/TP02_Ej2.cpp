#include <iostream>
using namespace std;

unsigned long int formatearAnio(unsigned int anio,unsigned int mes, unsigned int dia){
    return ((((anio*100)+mes)*100)+dia);
    /* unsigned long int fecha = (anio *100);
     fecha+=mes;
     fecha*= 100;
     fecha+=dia;
    */
}
unsigned long int formatearAnioVariante(unsigned int anio,unsigned int mes, unsigned int dia){
    return ((((dia*100)+mes)*10000)+anio);
    /* unsigned long int fecha = (anio *100);
     fecha+=mes;
     fecha*= 100;
     fecha+=dia;
    */
}

int main(void){
    unsigned int anio,mes,dia;
    cout << "Ingrese 3 enteros, year, mes, dia: ";
    cin >> anio >> mes >> dia;
    unsigned long int fecha;
    fecha= formatearAnio(anio,mes,dia);
    cout << "\n" << fecha << endl;
    return 0;
}
