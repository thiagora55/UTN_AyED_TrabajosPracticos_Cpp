#include <iostream>
using namespace std;

int compararCadenas(char cadena1[], char cadena2[]);

int main(){
    char cadena1[20];
    char cadena2[20];
    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 20);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 20);
    int resultado = compararCadenas(cadena1, cadena2);
    if (resultado == 0) {
        cout << "0" << endl; // Las cadenas son iguales
    } else if (resultado < 0) {
        cout << "Es menor" << endl; // La primera cadena es menor
    } else {
        cout << "Es mayor" << endl; // La primera cadena es mayor
    }
    return 0;
}


int compararCadenas(char cadena1[], char cadena2[]) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return cadena1[i] - cadena2[i]; // Devuelve la diferencia ASCII 
        }
        i++;
    }
    // si una termina antes, la diferencia de caracteres determina cuál es mayor o menor
    return cadena1[i] - cadena2[i];
}