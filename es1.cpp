#include <iostream>
#include <string.h>
using namespace std;

float somma(float num1,float num2){
    return num1+num2;
}
int main(){
float num1, num2;
cout << "Inserisci il primo valore da sommare: ";
cin >> num1;
cout << "Inserisci il secondo valore a sommare: ";
cin >> num2;
cout << "La loro somma e' -> " << num1 << "+" << num2 << "=" << somma(num1,num2);
}
