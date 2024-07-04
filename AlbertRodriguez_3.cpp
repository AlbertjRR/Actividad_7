//Ejercicio num 3
              
#include <iostream>
#include <fstream>
#include <string>

int main() {
    int totalFrutas;

    std::cout << "ingresar el total de frutas para almacenar: ";
    std::cin >> totaldFrutas;
    std::cin.ignore(); 

    std::ofstream archivo("total de Frutas alamcenadas.txt");

    if (archivo.is_open()) {
        std::string fruta;

        for (int i = 0; i < totalFrutas; i++) {
            std::cout << "Ingresar el nombre de la fruta " << i + 1 << ": ";
            std::getline(std::cin, fruta);
            archivo << fruta << std::endl;
        }

        std::cout << "los nombres fueron almacenadas en el archivo frutas almacenadas.txt." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo." << std::endl;
    }

    archivo.close();

    return 0;
}
