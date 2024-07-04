//Ejercicio num 1

#include <iostream>
#include <fstream>
#include <cctype> 

int main() {
    std::ifstream entrada("paradigma 1.txt"); 
    std::ofstream salida("paradigma 2.txt"); 

    if (entrada.is_open() && salida.is_open()) {
        char caracter;

        while (entrada >> std::noskipws >> caracter) {
            caracter = std::toupper(caracter); 
            salida << caracter; 
        }

        std::cout << "el archivo fue convertido en mayusculas." << std::endl;
    } else {
        std::cerr << "presento un Error al abrir los archivos." << std::endl;
    }

    entrada.close();
    salida.close();

    return 0;
}
