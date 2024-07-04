//Ejercicio num 2

#include <iostream>
#include <fstream>

int main() {
    int cantSueldo;

    std::cout << "ingresar los sueldos para almacenar: ";
    std::cin >> cantSueldo;

    std::ofstream archivo("sueldos", std::ios::binary); 

    if (archivo.is_open()) {
        float sueldo;

        for (int i = 0; i < cantSueldo; i++) {
            std::cout << "Ingrese el sueldo del trabajor  " << i + 1 << ": ";
            std::cin >> sueldo;
            archivo.write(reinterpret_cast<const char*>(&sueldo), sizeof(float)); 
        }

        std::cout << "Los sueldos fueron almacenados correctamente en el archivo sueldos." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo." << std::endl;
    }

    archivo.close();

    return 0;
}
