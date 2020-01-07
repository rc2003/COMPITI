#include <iostream>
using namespace std;
int main(){
	int x,y;
	int f=1;
	int CALC1(int a){
		for (int i=1; i<=a; i++){
			f*=i;
		}
		return f;
	}
	int CALC2(int b){
		prod=3^b;
		return prod;
	}
	double rapp(int c; int d){
		return c/d;
	}
	while(true){
	cout << "Inserisci il primo valore: ";
	cin >> a;
	cout << "Inserisci il secondo valore: ";
	cin >> b;
	if (x<0 or y<0){
		cout << "Devi inserire dei valori positivi" << endl;
	}
	else{
		break;
	}
	}
	int m = CALC1(x)
	int n = CALC2(y)
	cout << "Il primo calcolo e' " << m;
	cout << "Il secondo calcolo e' " << n;
	cout << "Il loro rapporto e' " << rapp(m;n);

}
