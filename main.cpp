/*
    //PROGRAMA DE CONTROL DE EDAD
#include <iostream>

int main() {
    int edad;
    std::cout << "Por favor, ingresa tu edad: ";
    std::cin >> edad;

    if(edad >= 18) {
        std::cout << "Eres mayor de edad.\n";
    } else {
        std::cout << "No eres mayor de edad.\n";
    }

    return 0;
}
    //PROGRAMA MAYOR O MENOR
#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Por favor, ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Por favor, ingresa el segundo numero: ";
    std::cin >> num2;

    if(num1 > num2) {
        std::cout << "El primer numero (" << num1 << ") es mayor que el segundo numero (" << num2 << ").\n";
    } else if(num1 < num2) {
        std::cout << "El segundo numero (" << num2 << ") es mayor que el primer numero (" << num1 << ").\n";
    } else {
        std::cout << "Ambos numeros son iguales.\n";
    }

    return 0;
}

//Programa de Par o Impar
#include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor, ingresa un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}

    //BUCLE WHILE
    #include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor, ingresa un numero: ";
    cin >> numero;

    long long factorial = 1;
    int i = 1;

    while (i <= numero) {
        factorial *= i;
        i++;
    }

    cout << "El factorial de " << numero << " es " << factorial << "." << endl;

    return 0;
}

 //BUCLE FOR
#include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor, ingresa un numero mayor a 10 y menor que 30: ";
    cin >> numero;

    if (numero <= 10 || numero >= 30) {
        cout << "El numero ingresado no está en el rango solicitado." << endl;
        return 0;
    }

    cout << "Los numeros impares desde 1 hasta " << numero << " son:" << endl;

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}

//BUCLE WHILE
#include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor, ingresa un numero mayor a 10 y menor que 30: ";
    cin >> numero;

    if (numero <= 10 || numero >= 30) {
        cout << "El numero ingresado no está en el rango solicitado." << endl;
        return 0;
    }

    cout << "Los numeros impares desde 1 hasta " << numero << " son:" << endl;

    int i = 1;
    while (i <= numero) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int numero;
    cout << "Por favor, ingresa un numero del 1 al 5: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "El dia 1 corresponde a Lunes." << endl;
            break;
        case 2:
            cout << "El dia 2 corresponde a Martes." << endl;
            break;
        case 3:
            cout << "El dia 3 corresponde a Miércoles." << endl;
            break;
        case 4:
            cout << "El dia 4 corresponde a Jueves." << endl;
            break;
        case 5:
            cout << "El dia 5 corresponde a Viernes." << endl;
            break;
        default:
            cout << "El numero ingresado no está en el rango solicitado." << endl;
            break;
    }

    return 0;
}
*/


