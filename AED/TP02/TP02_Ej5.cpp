#include <iostream>
using namespace std;

int gauss(int num){
    int sum=0;
    for (int i = 1; i <= num; i++){
        sum+=i;
        cout << sum << endl;    
    }
    return sum;
}

int main(void){
    int gaussNum, num;
    cout << "Ingrese numero: ";
    cin >> num;
    cout << "\nNumero ingresado: " << num << endl;
    gaussNum= gauss(num);

    cout << "\nNumero de gauss: " << gaussNum << endl;
    return 0;
}
