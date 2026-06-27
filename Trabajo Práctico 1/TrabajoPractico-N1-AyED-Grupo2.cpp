#include <iostream>
using namespace std;

//Función 1 - concatenarCadenas
void concatenarCadenas(char destino[], char origen[]) {
    int lenDest = largoCadena(destino);

    for (int i = lenDest; i < lenDest + largoCadena(origen); i++) {
        destino[i] = origen[i - lenDest];
    }
}

void concatenarCadenasTruncado(char destino[], int destBuf, char origen[]) {
    int lenDest = largoCadena(destino);
    int realLen = lenDest;

    for (int i = lenDest; i < destBuf; i++) {
        destino[i] = origen[i - lenDest];
        realLen++;
    }

    destino[realLen] = '\0'; // Nos aseguramos de insertar el null character
}


//Función 2 - compararCadenas
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


//Función 3 - copiarCadenas
void copiarCadenas(char destino[], char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0'; // Aseguramos el carácter centinela al final 
}


//Función 4 - largoCadena
int largoCadena(char cadena[]) {
    int c = 0;
    while (cadena[c] != '\0') {
        c++;
    }
    return c;
}


//Función 5 - contarLetrasEnCadena



//Función 6 - contarPalabrasEnCadena



//Función 7 - pasajeDiaACadena



//Función 8 - pasajeSegundosACadena







int main() {
    cout << "--- PRUEBAS DEL TRABAJO PRÁCTICO ---" << endl << endl;

    //Prueba Función 1 - concatenarCadenas
    cout << "Prueba Función 1 - concatenarCadenas" << endl;
    const int size = 10;
    char cadena1[20] = "Hola ";
    char cadena1C[size] = "Hola ";
    char cadena2[] = "Mundo";

    concatenarCadenas(cadena1, cadena2);
    concatenarCadenasTruncado(cadena1C, size, cadena2); // Para poder saber cuando truncar, se requiere pasar el espacio alojado en la cadena de destino
    
    cout << cadena1 << endl;
    cout << cadena1C << endl;
    cout << "------------------------------------" << endl;

    //Prueba Función 2 - compararCadenas
    cout << "Prueba Función 2 - compararCadenas" << endl;
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
    cout << "------------------------------------" << endl;

    //Prueba Función 3 - copiarCadenas
    cout << "Prueba Función 3 - copiarCadenas" << endl;
    char cadenaDestino[30] = "Uruguay tiene 4 mundiales";
    char cadenaOrigen[30] = "Uruguay tiene 2 mundiales";
    //quiero que muestre la cadenaDestino y la cadenaOrigen antes de copiar, y luego que muestre la cadenaDestino después de copiar
    cout << "Cadena 1: " << cadenaDestino << endl;
    cout << "Cadena 2: " << cadenaOrigen << endl;
    copiarCadenas(cadenaDestino, cadenaOrigen); 
    cout << "Cadena 1 copiada: " << cadenaDestino << endl;
    cout << "------------------------------------" << endl;

    //Prueba Función 4 - largoCadena
    cout << "Prueba Función 4 - largoCadena" << endl;
    char cadena[20] = "Hola Mundo";
    int largo = largoCadena(cadena);
    cout << "Largo de la cadena: " << largo << endl;
    cout << "------------------------------------" << endl;
    
    //Prueba Función 5 - contarLetrasEnCadena
    cout << "Prueba Función 5 - contarLetrasEnCadena" << endl;
    
    cout << "------------------------------------" << endl;
    
    //Prueba Función 6 - contarPalabrasEnCadena
    cout << "Prueba Función 6 - contarPalabrasEnCadena" << endl;

    cout << "------------------------------------" << endl;

    //Prueba Función 7 - pasajeDiaACadena
    cout << "Prueba Función 7 - pasajeDiaACadena" << endl;

    cout << "------------------------------------" << endl;

    //Prueba Función 8 - pasajeSegundosACadena
    cout << "Prueba Función 8 - pasajeSegundosACadena" << endl;
    
    cout << "------------------------------------" << endl;

    return 0;
}