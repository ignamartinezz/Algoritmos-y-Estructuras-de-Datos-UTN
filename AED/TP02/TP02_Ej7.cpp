#include <iostream>
using namespace std;

unsigned long int fibonacci(unsigned long int num){
    if(num==0)
        return 0;
    if (num==1)
        return 1;
    return fibonacci(num-1)+fibonacci(num-2);
}

// long int fiboorial_iterativo(long int num){
//     long int fibo=0;
//     while (num!=1){
//         fibo*=num;
//         num--;
//     }
//     return fibo;

// }


int main(void){
    unsigned long int fibo, num;
    cout << "Ingrese numero: ";
    cin >> num;
    cout << "\nNumero ingresado: " << num << endl;
    fibo= fibonacci(num);
    cout<< "El fibonacci de "<< num<< " es: "<< fibo <<endl;
    // fib=fibonacci_iterativo(num);
    cout<< "El fibonacci de "<< num<< " es: "<< fibo <<endl;
    return 0;
}
