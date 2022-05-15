#include <iostream>
using namespace std;

int FhtoC(int temp){
    return (temp-32)*0.5556;
}

int main(void){
    int tempF, tempC;
    cout << "Ingrese temperatura en fahrenheit: ";
    cin >> tempF;
    tempC= FhtoC(tempF);
    cout << "\nTemperatura en Celsius: " << tempC << endl;
    return 0;
}
