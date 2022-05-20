#include <iostream>
using namespace std;

long int factorial(long int num){
    if(num==1)
        return 1;
    return num*factorial(num-1);
}

long int factorial_iterativo(long int num){
    long int fact=1;
    while (num!=1){
        fact*=num;
        num--;
    }
    return fact;
}
int main(void){
    long int fact, num;
    cout << "Ingrese numero: ";
    cin >> num;
    cout << "\nNumero ingresado: " << num << endl;
    fact= factorial(num);
    cout<< "El factorial de "<< num<< " es: "<< fact <<endl;
    fact=factorial_iterativo(num);
    cout<< "El factorial de "<< num<< " es: "<< fact <<endl;
    return 0;
}