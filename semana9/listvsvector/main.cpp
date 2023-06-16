#include <iostream>
#include <list>
#include <vector>
#include <chrono>


int main() {
    const int numElements = 1000000;

    // Medir el tiempo de inserción en la lista
    auto startList = std::chrono::high_resolution_clock::now();
    std::list<int> myList;
    for (int i = 0; i < numElements; ++i) {
        myList.push_back(i);
    }
    auto endList = std::chrono::high_resolution_clock::now();

    // Medir el tiempo de inserción en el vector
    std::vector<int> myVector;
    auto startVector = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        myVector.push_back(i);
    }
    auto endVector = std::chrono::high_resolution_clock::now();

    // Calcular la duración de la inserción para la lista y el vector
    auto durationList = auto(endList - startList).count();
    auto durationVector = auto(endVector - startVector).count();

    // Imprimir los tiempos de ejecución
    std::cout << "Tiempo de inserción en lista: " << durationList << " microsegundos." << std::endl;
    std::cout << "Tiempo de inserción en vector: " << durationVector << " microsegundos." << std::endl;

    return 0;
}
