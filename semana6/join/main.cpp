#include <iostream>
#include <thread>
#include <chrono>
 
void functionPesada()
{
    std::this_thread::sleep_for(std::chrono::seconds(5));
}
 
void otraFunctionPesada()
{
    // simulate expensive operation
    std::this_thread::sleep_for(std::chrono::seconds(3));
}
 
int main()
{
    std::cout << "Empezando funcion pesada...\n";
    std::thread helper1(functionPesada);
 
    std::cout << "Empezando otra funcion pesafa...\n";
    std::thread helper2(otraFunctionPesada);
 
    std::cout << "Esperando que termine..." << std::endl;
    helper1.join();
    helper2.join();
 
    std::cout << "done!\n";
}