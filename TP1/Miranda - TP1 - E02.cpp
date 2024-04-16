#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

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

double areaT (double b, double a){ // Funcion que calcula el area de un triangulo.
    double area = b * a;
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

double areaC(double radio){
    double area;
    double pi = 3.1416;

    if(radio == 1){
        return pi;
    }

    area = pi * radio * radio;
    return ceil(area);
}

double sumPrimitives(int n1, double n2) {
    return double(n1 + n2);
}

int main() {
    int numInteger, number, num;
    double numDouble, base, altura, radio;

    cout << "------------------------------------\n";
    cout << "Suma con tipo de datos primitivos\n";
    cout << "------------------------------------\n";

    cout << "Ingrese el numero entero que desea sumar:\n";

    try {
        while (!(cin >> numInteger) || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f"; 

            cerr << "Error: Input invalido. Se esperaba un numero entero.\n";
            cout << "Ingrese nuevamente: ";
        }
    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    try {
        cout << "Ingrese el numero decimal que desea sumar:\n";

        while (!(cin >> numDouble)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. Se esperaba un numero.\n";
            cout << "Ingrese nuevamente: ";
        }
    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    cout << "La suma es: " << sumPrimitives(numInteger, numDouble) << ".\n";

    try {
        cout << "------------------------------------\n";
        cout << "Area de un triangulo\n";
        cout << "------------------------------------\n";

        cout << "Ingrese la base de su triangulo:\n";

        while (!(cin >> base) || base <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. La base debe ser un numero positivo.\n";
            cout << "Ingrese nuevamente la base: ";
        }

        cout << "Ingrese la altura de su triangulo:\n";

        while (!(cin >> altura) || altura <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. La altura debe ser un numero positivo.\n";
            cout << "Ingrese nuevamente la altura: ";
        }

    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    cout << "El area de su triangulo es: " << areaT(base, altura) << ".\n";

    try {
        cout << "------------------------------------\n";
        cout << "Par o impar\n";
        cout << "------------------------------------\n";

        cout << "Ingrese el numero que desea verificar:\n";

        while (!(cin >> number) || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. Debes ingresar un numero entero.\n";
            cout << "Ingrese nuevamente el numero: ";
        }

    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    if (evenOrNot(number)){
        cout << "Su numero es par!\n";
    } else {
        cout << "Su numero es impar!\n";
    }

    try {
        cout << "------------------------------------\n";
        cout << "Area de un circulo\n";
        cout << "------------------------------------\n";

        cout << "Ingrese el radio de su circulo:\n";

        while (!(cin >> radio)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. Debes ingresar un numero.\n";
            cout << "Ingrese nuevamente el radio: ";
        }

    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    cout << "El area de su circulo es: " << areaC(radio) << ".\n";

    try {
        cout << "------------------------------------\n";
        cout << "Primo o no\n";
        cout << "------------------------------------\n";

        cout << "Ingrese el numero que desea verificar:\n";

        while (!(cin >> num) || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\x1B[2J\x1B[0;0f";

            cerr << "Error: Input invalido. Debes ingresar un numero.\n";
            cout << "Ingrese nuevamente el numero: ";
        }

    } catch (const char& message) {
        cout << "Error: " << message << "\n";
        return 1;
    }

    if (isPrime(num)){
        cout << "Su numero es primo!\n";
    } else {
        cout << "Su numero no es primo!\n";
    }

    return 0;
}
