#include <iostream>
using namespace std;

//Función 3 - copiarCadenas
void copiarCadenas(char destino[], char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0'; // Aseguramos el carácter centinela al final 
}

int main() {
    char cadenaDestino[30] = "Uruguay tiene 4 mundiales";
    char cadenaOrigen[30] = "Uruguay tiene 2 mundiales";
    //quiero que muestre la cadenaDestino y la cadenaOrigen antes de copiar, y luego que muestre la cadenaDestino y la cadenaOrigen después de copiar
    cout << "------------------------------------" << endl;
    cout << "Cadena 1: " << cadenaDestino << endl;
    cout << "Cadena 2: " << cadenaOrigen << endl;
    copiarCadenas(cadenaDestino, cadenaOrigen); 
    cout << "Cadena 1 copiada: " << cadenaDestino << endl;
    cout << "------------------------------------" << endl;
    return 0;
}