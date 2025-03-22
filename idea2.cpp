//
// Created by CompuFire on 22/03/2025.
//

#include <iostream>
#include <math.h>

// función
int operacion(int num1, int num2, char op);

int main() {
    int num1, num2;
    char op;

    std::cout << "Ingrese la operacion (+, -, *, /, r, f): ";
    std::cin >> op;

    int resultado = operacion(num1, num2, op);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
    int operacion (int num1, int num2, char op) {
        switch (op) {
            case '+':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;
            std::cout << "Ingrese otro numero: ";
            std::cin >> num2;
                return num1 + num2;
            case '-':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;
            std::cout << "Ingrese otro numero: ";
            std::cin >> num2;
                return num1 - num2;
            case '*':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;
            std::cout << "Ingrese otro numero: ";
            std::cin >> num2;
                return num1 * num2;
            case '/':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;
            std::cout << "Ingrese otro numero: ";
            std::cin >> num2;
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    std::cout << "Error: No se puede dividir por cero." << std::endl;
                    return 0;
                }
            case 'r':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;

                if (num1 >= 0) {
                    return sqrt(num1);
                } else {
                    std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
                    return 0;
                }
            case 'f':
            std::cout << "Ingrese un numero numero:";
            std::cin >> num1;

                if (num1 >= 0) {
                    double factorial = 1;
                    for (int i = 1; i <= num1; i++) {
                        factorial *= i;
                    }
                    return factorial;
                } else {
                    std::cout << "Error: No se puede calcular el factorial de un número negativo." << std::endl;
                    return 0;
                }
            default:
                std::cout << "Error:operacion no valida." << std::endl;
            return 0;
        }
    }
