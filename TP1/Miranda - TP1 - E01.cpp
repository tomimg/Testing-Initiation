#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

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

int factorial(int n){ // Funcion que calcula el factorial de un numero.
    if (n == 0){
        return 1;
    }

    int factorial = 1;

    factorial *= n;
    n -= 1;

    while (n > 0){
        factorial *= n;
        n -= 1;
    }

    return factorial;
}

double sumaprimitivos(int n1, double n2){
    return double(n1 + n2);
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

void general_test(){
    assert(areaT(2, 4) == 4);
    assert(areaT(10, 3) == 15);
    assert(areaT(20, 4) == 40);
    cout << "- Funcion de area de un triangulo ✓\n";

    assert(evenOrNot(0) == true);
    assert(evenOrNot(1) == false);
    assert(evenOrNot(24) == true);
    cout << "- Funcion de par o impar ✓\n";

    assert(factorial(0) == 1);
    assert(factorial(2) == 2);
    assert(factorial(10) == 3628800);
    cout << "- Funcion factorial ✓\n";

    assert(sumaprimitivos(0, 0.5) == 0.5);
    assert(sumaprimitivos(601, 0.2) == 601.2);
    assert(sumaprimitivos(10, -20.5) == -10.5);
    cout << "- Funcion suma de numeros con tipos de datos primitivos ✓\n";

    assert(areaC(4) == 51);
    assert(areaC(8) == 202);
    assert(areaC(1) == 3.1416);
    cout << "- Funcion de area de un circulo ✓\n";
}

int main(){
    general_test();
    return 0;
}
