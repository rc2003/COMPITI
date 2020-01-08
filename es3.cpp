#include <iostream>
#include <string.h>
using namespace std;
int a,b;
int multiplo(int a, int b){
    if (b%a == 0){
        cout << "Il secondo valore è multiplo del primo";
    }
    else{
        cout << "Il secondo valore non è multiplo del primo";
    }
}
int main(){
    while(true){
	cout << "Inserisci il primo valore: ";
	cin >> a;
	cout << "Inserisci il secondo valore: ";
	cin >> b;
	if (a<0 or b<0){
		cout << "Devi inserire dei valori positivi" << endl;
	}
	else{
		break;
	}
	}
	multiplo(a,b);
}
