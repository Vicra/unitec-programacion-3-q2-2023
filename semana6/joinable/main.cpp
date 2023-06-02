#include <iostream>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;
 
void funcionLarga()
{
    std::this_thread::sleep_for(500ms);
}
 
int main()
{
    std::cout << std::boolalpha;
 
    std::thread t;
    std::cout << "Antes de empezar, joinable: " << t.joinable() << '\n';
 
    t = std::thread{funcionLarga};
    std::cout << "Despues de empezar, joinable: " << t.joinable() << '\n';
 
    t.join();
    std::cout << "Despues de join, joinable: " << t.joinable() << '\n';
 
    t = std::thread{funcionLarga};
    t.detach();
    std::cout << "Despues de detaching, joinable: " << t.joinable() << '\n';
    std::this_thread::sleep_for(1500ms);
}