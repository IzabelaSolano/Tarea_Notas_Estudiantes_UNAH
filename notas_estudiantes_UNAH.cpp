/*Programa de notas de estudiantes UNAH*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;
    double nota1, nota2, nota3;

    // Entrada de datos
    cout << "Ingrese nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese edad del estudiante: ";
    cin >> edad;

    cout << "Ingrese tres notas (0-100): ";
    cin >> nota1 >> nota2 >> nota3;

    // Validaciones con operadores lógicos
    if (edad < 16 || edad > 90) {
        cout << "Edad incorrecta" << endl;
        return 0;
    }
    if ((nota1 < 0 || nota1 > 100) || (nota2 < 0 || nota2 > 100) || (nota3 < 0 || nota3 > 100)) {
        cout << "Calificacion incorrecta" << endl;
        return 0;
    }

    // Proceso: promedio simple
    double promedio = (nota1 + nota2 + nota3) / 3;

    // Salida principal
    cout << "Estudiante: " << nombre << endl;
    cout << "Promedio: " << promedio << endl;

    // Apartado extra 1: Observación con operadores lógicos
    if (promedio >= 90 && promedio <= 100) cout << "Observacion: Sobresaliente" << endl;
    else if (promedio >= 80 && promedio <= 89) cout << "Observacion: Notable" << endl;
    else if (promedio >= 70 && promedio <= 79) cout << "Observacion: Aprobado" << endl;
    else cout << "Observacion: Reprobado" << endl;

    // Apartado extra 2: Mensaje motivacional
    if (promedio >= 70) {
        cout << "¡Muy bien, sigue adelante " << nombre << "!" << endl;
    } else {
        cout << "No te rindas " << nombre << ", estudia un poco más y lo lograrás." << endl;
    }

    return 0;
}
