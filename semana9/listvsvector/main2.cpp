#include <iostream>
#include <list>
#include <vector>
#include <chrono>

int main() {
    // const int numElements = 100000;
    //const int numElements = 12;
    const int numElements = 500;

    // Crear una lista vacía y un vector vacío
    std::list<int> myList;
    std::vector<int> myVector;

    // Medir el tiempo de inserción en la lista
    auto startListInsert = 
        std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        myList.push_back(i);
    }
    auto endListInsert = std::chrono::high_resolution_clock::now();

    // Medir el tiempo de inserción en el vector
    auto startVectorInsert = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        myVector.push_back(i);
    }
    auto endVectorInsert = std::chrono::high_resolution_clock::now();

    // Calcular la duración de la inserción para la lista y el vector
    auto durationListInsert = std::chrono::duration_cast<std::chrono::microseconds>(endListInsert - startListInsert).count();
    auto durationVectorInsert = std::chrono::duration_cast<std::chrono::microseconds>(endVectorInsert - startVectorInsert).count();

    // Medir el tiempo de eliminación en la lista
    auto startListErase = std::chrono::high_resolution_clock::now();
    myList.clear();
    auto endListErase = std::chrono::high_resolution_clock::now();

    // Medir el tiempo de eliminación en el vector
    auto startVectorErase = std::chrono::high_resolution_clock::now();
    myVector.clear();
    auto endVectorErase = std::chrono::high_resolution_clock::now();

    // Calcular la duración de la eliminación para la lista y el vector
    auto durationListErase = std::chrono::duration_cast<std::chrono::microseconds>(endListErase - startListErase).count();
    auto durationVectorErase = std::chrono::duration_cast<std::chrono::microseconds>(endVectorErase - startVectorErase).count();

    // Imprimir los tiempos de ejecución
    std::cout << "Tiempo de inserción en lista: " << durationListInsert << " microsegundos." << std::endl;
    std::cout << "Tiempo de inserción en vector: " << durationVectorInsert << " microsegundos." << std::endl;
    std::cout << "Tiempo de eliminación en lista: " << durationListErase << " microsegundos." << std::endl;
    std::cout << "Tiempo de eliminación en vector: " << durationVectorErase << " microsegundos." << std::endl;

    return 0;
}
