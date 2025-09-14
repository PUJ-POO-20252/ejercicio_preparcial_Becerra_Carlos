#include <iostream>
#include <string>
using namespace std;

// Prototipos de funciones
void ejercicio1(); // Tabla de multiplicar
void ejercicio2(); // Clasificar triangulo
void ejercicio3(); // Palabra palindroma
void ejercicio4(); // Numero capicua
void ejercicio5(); // Primer caracter no repetido
void ejercicio6(); // Mayor y menor en un arreglo

int main() {
    int opcion;

    do {
        cout << "===== MENU DE EJERCICIOS =====" << endl;
        cout << "1. Ejercicio 1: Tabla de multiplicar" << endl;
        cout << "2. Ejercicio 2: Clasificar triangulo" << endl;
        cout << "3. Ejercicio 3: Palabra palindroma" << endl;
        cout << "4. Ejercicio 4: Numero capicua" << endl;
        cout << "5. Ejercicio 5: Primer caracter no repetido" << endl;
        cout << "6. Ejercicio 6: Mayor y menor en un arreglo" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: ejercicio1(); break;
            case 2: ejercicio2(); break;
            case 3: ejercicio3(); break;
            case 4: ejercicio4(); break;
            case 5: ejercicio5(); break;
            case 6: ejercicio6(); break;
            case 0: cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opcion invalida. Intente de nuevo." << endl;
        }
        cout << endl;
    } while(opcion != 0);

    return 0;
}

// ================== Funciones ==================

// Ejercicio 1: Tabla de multiplicar
void ejercicio1() {
    int numero;
    cout << "Ingrese el numero que desea multiplicar: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

// Ejercicio 2: Clasificar triangulo
void ejercicio2() {
    float lado1, lado2, lado3;
    cout << "Ingrese los 3 lados del triangulo: ";
    cin >> lado1 >> lado2 >> lado3;

    if(lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero" << endl;
    } else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "El triangulo es isosceles" << endl;
    } else {
        cout << "El triangulo es escaleno" << endl;
    }
}

// Ejercicio 3: Palabra palindroma
void ejercicio3() {
    string palabra, invertida = "";
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(int i = palabra.size()-1; i >= 0; i--) {
        invertida += palabra[i];
    }

    if(palabra == invertida) {
        cout << "La palabra SI es palindroma" << endl;
    } else {
        cout << "La palabra NO es palindroma" << endl;
    }
}

// Ejercicio 4: Numero capicua
void ejercicio4() {
    string numero, invertido = "";
    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i = numero.size()-1; i >= 0; i--) {
        invertido += numero[i];
    }

    if(numero == invertido) {
        cout << "El numero SI es capicua" << endl;
    } else {
        cout << "El numero NO es capicua" << endl;
    }
}

// Ejercicio 5: Primer caracter no repetido
void ejercicio5() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool encontrado = false;
    for(int i = 0; i < palabra.size(); i++) {
        int repeticiones = 0;
        for(int j = 0; j < palabra.size(); j++) {
            if(palabra[i] == palabra[j]) {
                repeticiones++;
            }
        }
        if(repeticiones == 1) {
            cout << "El primer caracter no repetido es: " << palabra[i] << endl;
            encontrado = true;
            break;
        }
    }

    if(!encontrado) {
        cout << "Todos los caracteres se repiten" << endl;
    }
}

// Ejercicio 6: Mayor y menor en un arreglo
void ejercicio6() {
    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int numeros[N];
    for(int i = 0; i < N; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for(int i = 1; i < N; i++) {
        if(numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
}
