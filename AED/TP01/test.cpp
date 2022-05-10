 //g++ -pedantic-errors -Wall -g -std=c++17 TP1.cpp -o TP1
 //FOR COMPILING


#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    unsigned long long sumador=0;
    unsigned long long potencia;
    for (int i = 0; i < 64; i++){
        potencia= pow(2, i);
        sumador += potencia;
        cout << sumador << endl;
    }
    return 0;
}
    //    sumador += (pow(2,i));