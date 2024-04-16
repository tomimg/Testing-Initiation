#include <iostream>
#include <cmath>

using namespace std;

bool isZero(double n){
    return fabs(n) < 0.0001;
}

bool isNegative(double n){
    if (n < 0){ return true; } else { return false; }
}    

bool isPositive(double n){
    if (n > 0){ return true; } else { return false; }
}

bool isDecimal(double n){
    return fmod(n, static_cast<int>(n)) == 0;
}

bool hasSpaces(const string text) {
  for (const char character : text) {
    if (character == ' ') {
      return true;
    }
  }

  return false;
}
double areaC(double radio){
    double area;
    double pi = 3.1416;

    if(radio == 1){
        return pi;
    }

    area = pi * radio * radio;
    return ceil(area);
}

double areaT (double b, double h){ // Funcion que calcula el area de un triangulo.
    double area = b * h;
    area /= 2;
    return area;
}

bool evenOrNot(int n){ // Funcion que calcula si un numero es par o no.
    if (n % 2 == 0){
        return true;
    } else {
        return false;
    }  
}

bool isPrime(int num){
    if (num == 0){
        return false;
    }
    if (num == 1){
        return true;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

string reverse (string str){
    int b = str.size() - 1;
    char aux = '\0';
    for (int i = 0; i < b; i++){
        aux = str[i];
        str[i] = str[b];
        str[b] = aux;
        b--;
    }
    return str;
}

int main(){
    int number, num;
    double radio, base, height;
    string words;
    while (true){
        cout << "--------------------------\n";
        cout << "Ingrese el radio de su triangulo:\n"; cin >> radio;
        if (!isZero(radio) && !isNegative(radio)){
            cout << "El area de su círculo es: " << areaC(radio) << ".\n";
        } else {
            cout << "\x1B[2J\x1B[0;0f";
            cout << "Ingresaste un valor inadecuado.\n";
            break;
        }

        cout << "--------------------------\n";
        cout << "Ingrese el numero que desea verificar si es par o no:\n"; cin >> number;
        if (isPositive(number) || isNegative(number) && !isZero(number) && !isDecimal(number)){
            if(evenOrNot(number)){
                cout << "Su numero es par!\n";
            } else {
                cout << "Su numero es impar!\n";
            }
        } else {
            cout << "\x1B[2J\x1B[0;0f";
            cout<< "Ingresaste un valor inadecuado.\n";
            break;
        }

        cout << "--------------------------\n";
        cout << "Ingrese el numero que desea verificar si es primo o no:\n"; cin >> num;
        if (isPositive(num) || isZero(num) && !isNegative(num) && !isDecimal(num)){
            if(isPrime(num)){
                cout << "Su numero es primo!\n";
            } else {
                cout << "Su numero no es primo!\n";
            }
        } else {
            cout << "\x1B[2J\x1B[0;0f";
            cout << "Ingresaste un valor inadecuado.\n";
            break;
        }
        cout << "--------------------------\n";
        cout << "Ingrese la base de su triangulo:\n"; cin >> base;
        if (!isZero(base) && !isNegative(base)){
            cout << "Ingrese la altura de su triangulo:\n"; cin >> height;
                if (!isZero(height) && !isNegative(height)){
                    cout << "El area de su triangulo es: " << areaT(base, height) << ".\n";
                } else {
                    cerr << "\x1B[2J\x1B[0;0f";
                    cerr << "Ingresaste un valor inadecuado.\n";
                    break;
                }
        } else {
            cout << "\x1B[2J\x1B[0;0f";
            cout << "Ingresaste un valor inadecuado.\n";
            break;
        }

        cout << "--------------------------\n";
        cout << "Ingrese la frase que desea dar vuelta:\n"; cin.ignore(); getline(cin, words);
        if (hasSpaces(words)){
            cout << "La frase ingresada dada vuelta es: " << reverse(words) << "\n";
            break;
        } else {
            cout << "\x1B[2J\x1B[0;0f";
            cout << "Ingresaste un valor inadecuado.\n";
            break;
        }
        
    }
    return 0;
}