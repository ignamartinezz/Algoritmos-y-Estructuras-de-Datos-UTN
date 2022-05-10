#include <iostream>
#include <math.h>
using namespace std;

//g++ -pedantic-errors -Wall -g -std=c++17 TP1.cpp -o TP1

int main(){
    /* EJERCICIO 1
    cout << "Ingrese un valor en pulgadas ";
    float mm, mmpulg= 25.4;
    cin >> mm;
    cout << mm << "mm equivalen a " << mm/mmpulg <<" pulgadas." << endl;
    */
    //Se puede realizar mediante un enum Dias {lunes = 1,martes,...};
    /* EJERCICIO 2
    cout << "Ingrese un numero entero del 1 al 7 ";
    int dia;
    cin >> dia;
    switch (dia)
    {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miercoles" << std::endl;
        break;
    case 4:
        std::cout << "Jueves" << std::endl;
        break;
    case 5:
        std::cout << "Viernes" << std::endl;
        break;
    case 6:
        std::cout << "Sabado" << std::endl;
        break;
    case 7:
        std::cout << "Domingo" << std::endl;
        break;
    default:
        cout << "Error de ingreso de datos" << endl;
    }
    */
    /* EJERCICIO 3
    int a, b, aux;
    std::cout << "Ingrese dos valores a y b. \nIngrese a: ";
    cin >> a;
    std::cout << "Ingrese b: ";
    cin >> b;
    aux=b;
    b=a;
    a=aux;
    std::cout << "Cambio\nA:" << a << "\nB:" << b << std::endl;
    */
    /* EJERCICIO 4
    int num1, num2;
    std::cout << "Ingresar la cantidad de bultos y los bultos por caja.\nCantidad de bultos: " ;
    cin >> num1;
    std::cout << "Ingrese bultos por caja: ";
    cin >> num2;
    cout << "Cajas completas: " << num1/num2 <<"\n Bultos sueltos:"<< num1 % num2 << endl;
    */
    /* EJERCICIO 5
    int a, b, aux;
    std::cout << "Ingrese valores de dos angulos del triangulo. \nIngrese a: ";
    cin >> a;
    std::cout << "Ingrese b: ";
    cin >> b;
    std::cout << "Medida del tercer angulo: "<< 180-(a+b) << std::endl;
    */
    /* EJERCICIO DE WHATSAPP
    float horas, valor;
    cout << "Ingresar la cantidad de horas y valor por hora.\nCantidad de horas: ";
    cin >> horas;
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Sueldo a pagar: " << horas*valor << endl;
    */
    /* EJERCICIO 6
    float lado;
    cout << "Ingresar medida del lado del cuadrado:";
    cin >> lado;
    cout << "Perimetro del cuadrado: " << lado*4 << "\nArea del cuadrado: "<< (lado*lado)/2 << endl;
    */
    /* EJERCICIO 7
    float num1, num2;
    cout << "Ingresar dos valores uno despues del otro:\n";
    cin >> num1 >> num2;
    cout << "El mayor de ellos es el: "<< ((num1>num2)? num1:num2) << endl;
    */
    /* EJERCICIO 8 PODRIA SER MAS EFICIENTE
    float lado1,lado2,lado3;
    cout << "Ingresar longitud de los 3 lados uno despues del otro:\n";
    cin >> lado1 >> lado2 >> lado3;
    int sumador=1;
    if (lado1==lado2){
        sumador+=1;
        if (lado1==lado3)
            sumador+=1;
    }
    else if (lado1==lado3)
        sumador+=1;
    else if (lado2==lado3)
        sumador+=1;
    
    switch (sumador){
    case 1:
        cout << "Triangulo escaleno" << endl;
        break;
    case 2:
        cout << "Triangulo isosceles"<< endl;
        break;
    case 3:
        cout << "Triangulo equilatero"<< endl;
        break;
    }  
    
    int l1, l2, l3;
    if (l1==l2){ //No es escaleno
        if (l1==l3){
            cout << "Triangulo equilatero"<< endl;
        }else{
            cout << "isosceles(l3 distinto)"<< endl;
        }
    }else{
        if (l2==l3){
            cout << "Isosceles (l1 distinto)"<< endl;
        }else if (l1==l3){
            cout << "Isosceles (l2 distinto)"<< endl;
        }else{
            cout << "Escaleno"<< endl;    
        }
    }
    
    //
    // EJERCICIO 9 
    int var1,var2,var3;
    int grande,chico,medio;
    cout << "Ingresar 3 valores enteros uno despues del otro:\n";
    cin >> var1 >> var2 >> var3;
    cout << "Valores:"<< var1 <<" "<< var2 <<" "<< var3 << endl;
    if (var1 > var2){
        medio=var1;
        chico=var2;
    }else{
        medio=var2;
        chico=var1;
    }if (medio>var3){
        grande=medio;
        if (chico>var3){
            medio=chico;
            chico=var3;
        }else
            medio=var3;
    }else
        grande=var3;

    cout << "Mayor a menor: "<< grande <<" "<< medio<<" " << chico << endl;
    return 0;
    */
    /* EJERCICIO 10
    int var, sumador;
    cout << "Ingrese un entero: \n" ;
    cin >> var;
    cout << var << "\n" << endl;
    while (var!=0){
        var/=10;
        sumador++; 
        cout << var<< endl;
    }
    cout << "Su numero tiene " << sumador << " cifras" << endl;
    */
    /* EJERCICIO 11
    int var, sumador;
    cout << "Ingrese un entero: \n" ;
    cin >> var;
    cout << var << "\n" << endl;
    while (var!=0){
        var/=16;
        sumador++; 
        cout << var<< endl;
    }
    cout << "Su numero tiene " << sumador << " cifras" << endl;
    */
    /* EJERCICIO 12
    float var2;
    cout << "Ingrese un numero: \n" ;
    cin >> var2;
    cout << var2 << "\n" << endl;
    string result =(var2 > 0) ? "positivo" : "negativo"; 
    while (var2!=0){
        var2/=10; 
        cout << var2<< endl;
    }
    cout << "Su numero es " << result << endl;
   */
    // EJERCICIO 13
    unsigned long long sumador=0;
    unsigned long long potencia;
    for (int i = 0; i < 64; i++){
        potencia= pow(2, i);
        sumador += potencia;
        cout <<i<<"    "<< sumador << endl;
    }
    
    //Ejercicio 13 modo pro

    
}



