#include <iostream>
#include <cmath>
#include <limits>
#include <stdexcept>

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

        if (!(cin >> numInteger)){
            throw invalid_argument("Tenias que poner un numero, no una letra!");
        } else if (cin.peek() != '\n'){
            throw invalid_argument("Tenias que poner un numero entero!");
        }

    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingrese el numero decimal que desea sumar:\n";

    try {

        if (!(cin >> numDouble)){
            throw invalid_argument("Ingresa un numero, no letras!");
        }

        cout << "La suma es: " << sumPrimitives(numInteger, numDouble) << ".\n";
        
    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "------------------------------------\n";
    cout << "Area de un triangulo\n";
    cout << "------------------------------------\n";

    try {

        cout << "Ingrese la base de su triangulo:\n";

        if (!(cin >> base)){
            throw invalid_argument("Ingresa numeros, no letras!");
        } else if (base <= 0){
            throw invalid_argument("La base no puede ser igual o menor a 0!");
        }

        cout << "Ingrese la altura de su triangulo:\n";

        if (!(cin >> altura)){
            throw invalid_argument("Ingresa numeros, no letras!");
        } else if (altura <= 0){
            throw invalid_argument("La altura no puede ser igual o menor a 0!");
        }

        cout << "El area de su triangulo es: " << areaT(base, altura) << ".\n";

    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "------------------------------------\n";
    cout << "Par o impar\n";
    cout << "------------------------------------\n";

    try {
        cout << "Ingrese el numero que desea verificar:\n";

        if (!(cin >> number)){
            throw invalid_argument("Ingresa numeros!");
        } else if (cin.peek() != '\n'){
            throw invalid_argument("El numero tiene que ser entero!");
        }

        if (evenOrNot(number)){
            cout << "Su numero es par!\n";
        } else {
            cout << "Su numero es impar!\n";
        }


    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "------------------------------------\n";
    cout << "Area de un circulo\n";
    cout << "------------------------------------\n";

    try {
        cout << "Ingrese el radio de su circulo:\n";

        if (!(cin >> radio)){
            throw invalid_argument("El radio debe ser un numero!");
        }

        cout << "El area de su circulo es: " << areaC(radio) << ".\n";

    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "------------------------------------\n";
    cout << "Primo o no\n";
    cout << "------------------------------------\n";

    try {

        cout << "Ingrese el numero que desea verificar:\n";

        if (!(cin >> num)){
            throw invalid_argument("Tenes que ingresar un numero!");
        } else if (cin.peek() != '\n'){
            throw invalid_argument("Ingresa un numero entero!");
        }

        if (isPrime(num)){
        cout << "Su numero es primo!\n";
        } else {
            cout << "Su numero no es primo!\n";
        }

    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}
