#include <iostream>
#include <string.h>
using namespace std;

int fattoriale(int a){
    int f=1;
    for (int i=0; i<=a; i++){
        f*=i; 
    }
    cout << f;
}

int potenza(int b, int c){
    int p = b^c;
    cout << p;
}

int main(){
    int scelta,a,b,c;
    cout << "1. Calcolo del fattoriale di un numero intero positivo" << endl;
