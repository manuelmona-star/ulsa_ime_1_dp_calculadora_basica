// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    int opcion = 0;
    double a = 0.0;
    double b = 0.0;
    double resultado = 0.0;
    char simbolo = ' ';

     // Pasos 1 y 2: título y menú
    std::cout << "Calculadora basica\n";
    std::cout << "1) Suma  2) Resta  3) Multiplicacion  4) Division\n";

    // Paso 3: leer la opción y validar
    do {
    opcion = leerEntero("Elige una opcion (1-4): ");
    } while (opcion < 1 || opcion > 4);

    // Pasos 4 y 5: leer los dos números
    a = leerDecimal("Primer numero: ");
    b = leerDecimal("Segundo numero: ");

    // Paso 7: decisiòn mùltiple 
    switch (opcion) {
    case 1:
        resultado = a + b;
        simbolo = '+';
        break;

    case 2:
        resultado = a - b;
        simbolo = '-';
        break;

    case 3:
        resultado = a * b;
        simbolo = '*';
        break;

    case 4:
        resultado = a / b;
        simbolo = '/';
        break;

    default:
        std::cout << "Opcion inesperada\n";
        break;
}

    // Paso 8: mostrar resultado
    std::cout << a << " " << simbolo << " " << b << " = " << resultado << "\n";

    return 0;
}