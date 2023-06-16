#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

void compare_execution_times() {
    const int data_size = 1000000;
    vector<int> data(data_size);
    deque<int> deque_data;
    list<int> list_data;

    // Generar datos aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, data_size);
    
    high_resolution_clock::time_point start_time = high_resolution_clock::now();
    for (int i = 0; i < data_size; i++) {
        int random_num = dis(gen);
        data[i] = random_num;
    }
    auto vector_insert_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);
    
    start_time = high_resolution_clock::now();
    for (int i = 0; i < data_size; i++) {
        int random_num = dis(gen);
        deque_data.push_back(random_num);
    }
    auto deque_insert_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);
    
    start_time = high_resolution_clock::now();
    for (int i = 0; i < data_size; i++) {
        int random_num = dis(gen);
        list_data.push_back(random_num);
    }
    auto list_insert_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    // Lectura
    start_time = high_resolution_clock::now();
    for (int item : deque_data) {
        // No hacer nada, solo recorrer los elementos
    }
    auto deque_read_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    for (int item : data) {
        // No hacer nada, solo recorrer los elementos
    }
    auto vector_read_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    for (int item : list_data) {
        // No hacer nada, solo recorrer los elementos
    }
    auto list_read_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    // Ordenación (sort)
    start_time = high_resolution_clock::now();
    sort(deque_data.begin(), deque_data.end());
    auto deque_sort_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    sort(data.begin(), data.end());
    auto vector_sort_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    list_data.sort();
    auto list_sort_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    // Reversión
    start_time = high_resolution_clock::now();
    reverse(deque_data.begin(), deque_data.end());
    auto deque_reverse_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    reverse(data.begin(), data.end());
    auto vector_reverse_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    start_time = high_resolution_clock::now();
    list_data.reverse();
    auto list_reverse_time = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);

    // Mostrar resultados
    cout << "Tiempos de ejecución (en milisegundos):\n";
    cout << "-------------------------------------\n";
    cout << "Lectura:\n";
    cout << "Deque: " << deque_read_time.count() << endl;
    cout << "Vector: " << vector_read_time.count() << endl;
    cout << "List: " << list_read_time.count() << endl;

    cout << "-------------------------------------\n";
    cout << "Inserción:\n";
    cout << "Deque: " << deque_insert_time.count() << endl;
    cout << "Vector: " << vector_insert_time.count() << endl;
    cout << "List: " << list_insert_time.count() << endl;

    cout << "-------------------------------------\n";
    cout << "Ordenación (sort):\n";
    cout << "Deque: " << deque_sort_time.count() << endl;
    cout << "Vector: " << vector_sort_time.count() << endl;
    cout << "List: " << list_sort_time.count() << endl;

    cout << "-------------------------------------\n";
    cout << "Reversión:\n";
    cout << "Deque: " << deque_reverse_time.count() << endl;
    cout << "Vector: " << vector_reverse_time.count() << endl;
    cout << "List: " << list_reverse_time.count() << endl;
}

int main() {
    compare_execution_times();
    return 0;
}
