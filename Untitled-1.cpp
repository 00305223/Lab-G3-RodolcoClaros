

#include <iostream>

int NumeroNatural(int n) {
    if (n == 1) {
        return 1; // Caso base o condición de paro
    } else {
        return n + NumeroNatural(n - 1); // Llamada recursiva
    }
}
        //Funcion main, donde se ingresa el numero natural
int main() {
    int numero;
    std::cout << "Ingresa un numero: ";
    std::cin >> numero;
    std::cout << "El suma de " << numero << " es: " << NumeroNatural(numero) << std::endl;
    return 0;
}   