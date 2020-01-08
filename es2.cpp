#include <iostream>
#include <string.h>
using namespace std;

int somma(int num1, int num2) {
  return num1 + num2;
}

int diff(int num1, int num2) {
  return num1 - num2;
}

int molt(int num1, int num2) {
  return num1 * num2;
}

int fraz(int num1, int num2) {
  return num1 / num2;
}

int main() {
  int num1, num2;
  string op;
  while (true) {
    cout << "Inserisci il primo valore: ";
    cin >> num1;
    if (num1 < 0) {
      cout << "Inserire un valore positivo" << endl;
    } else {
      break;
    }
  }
  while (true) {
    cout << "Inserisci il secondo valore: ";
    cin >> num2;
    if (num2 < 0) {
      cout << "Inserire un valore positivo" << endl;
    } else {
      break;
    }
  }
  cout << "Inserisci l'operatore: ";
  cin >> op;
  if (op == "+") {
    cout << "La loro somma e' -> " << num1 << "+" << num2 << "=" <<
      somma(num1, num2);
  } else if (op == "-") {
    cout << "La loro differenza e' -> " << num1 << "-" << num2 << "=" <<
      diff(num1, num2);
  } else if (op == "*") {
    cout << "Il loro prodotto e' -> " << num1 << "*" << num2 << "=" <<
      molt(num1, num2);
  } else if (op == "/") {
    cout << "La loro divisione e' -> " << num1 << "/" << num2 << "=" <<
      fraz(num1, num2);
  }
}

