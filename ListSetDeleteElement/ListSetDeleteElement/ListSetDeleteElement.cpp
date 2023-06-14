#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

template <typename T>
int deleteElementsByKey(list<T>& container, T key) {
    int deletedElements = 0;
    for (auto it = container.begin(); it != container.end(); ) {
        if (*it == key) {
            deletedElements ++;
            it = container.erase(it);
            if (it == container.end()) {
                break;
            }
        } else {
            ++it;
        }
    }
    return deletedElements;
}

template <typename T>
void print(list<T> container) {
    for (auto const i : container) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> datos;
    datos.push_back(1);
    datos.push_back(3);
    datos.push_back(1);
    datos.push_back(2);
    print(datos);
    int deleted = deleteElementsByKey(datos, 1);
    
    print(datos);
    cout << "Deleted: " << deleted << " elements" << endl;
    //print(deleted);
}
