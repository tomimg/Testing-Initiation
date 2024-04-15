#include <iostream>

using namespace std;

double sumaPrimitivos(int n1, double n2) {
    return n2 + static_cast<double>(n1); // Conversion mas eficiente.
}

int main() {
    int numInteger;
    double numDouble;

    try {
        cout << "Ingrese el numero entero que desea sumar:\n";
        cin >> numInteger;

        if (!cin) { // Se verifican errores de entrada después de ingresar el numero entero.
            cerr << "Error: Input invalido.\n";
            return 1;
        }

        cout << "Ingrese el numero decimal que desea sumar:\n";

        cin >> numDouble;

        if (!cin) { // Verificamos el input despues de ingresar el numero decimal.
            cerr << "Error: Input invalido.\n";
            return 1;
        }

    } catch (const runtime_error& error) {
        cout << "Error: " << error.what() << "\n";
        return 1;
    }

    double result = sumaPrimitivos(numInteger, numDouble);
    cout << "La suma es: " << result << "\n";

    return 0;
}

