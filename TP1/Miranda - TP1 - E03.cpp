#include <iostream>
#include <cmath>
#include <limits>

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
    cout << "--------------------------\n";
    cout << "Ingrese el radio de su triangulo:\n"; cin >> radio;
    while (isZero(radio) || isNegative(radio)){
        cout << "\x1B[2J\x1B[0;0f";
        cout << "Ingresaste un valor inadecuado. Ingresa otro valor:\n";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cin >> radio;
    }
    cout << "El area de su círculo es: " << areaC(radio) << ".\n";

    cout << "--------------------------\n";
    cout << "Ingrese el numero que desea verificar si es par o no:\n"; cin >> number;

    while(!isPositive(number) || !isNegative(number) && isZero(number) && isDecimal(number)){
        cout << "\x1B[2J\x1B[0;0f";
        cout << "Ingresaste un valor inadecuado. Ingresa otro valor:\n";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cin >> number;
    }

    if(evenOrNot(number)){
        cout << "Su numero es par!\n";
    } else {
        cout << "Su numero es impar!\n";
    }

    cout << "--------------------------\n";
    cout << "Ingrese el numero que desea verificar si es primo o no:\n"; cin >> num;
    while (!isPositive(num) || !isZero(num) && isNegative(num) && isDecimal(num)){
        cout << "\x1B[2J\x1B[0;0f";
        cout << "Ingresaste un valor inadecuado. Ingresa otro valor:\n";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cin >> num;
    }
    if(isPrime(num)){
        cout << "Su numero es primo!\n";
    } else {
        cout << "Su numero no es primo!\n";
    }

    cout << "--------------------------\n";
    cout << "Ingrese la base y altura de su triangulo:\n"; cin >> base >> height;
    while(isZero(base) || isNegative(base) || isZero(height) || isNegative(height)){
        cerr << "\x1B[2J\x1B[0;0f";
        cerr << "Ingresaste valores inadecuado. Ingresa otros valores:\n";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cin >> base >> height;
    }
    cout << "El area de su triangulo es: " << areaT(base, height) << ".\n";

    cout << "--------------------------\n";
    cout << "Ingrese la frase que desea dar vuelta:\n";
    cin.ignore();
    getline(cin, words);

    while (!hasSpaces(words)){
        cout << "Ingresaste una frase sin espacios. Ingresa otra con espacios:\n";
        cin.clear(); 
        getline(cin, words);
    }

    cout << "La frase ingresada dada vuelta es: " << reverse(words) << "\n";
    
    return 0;
}