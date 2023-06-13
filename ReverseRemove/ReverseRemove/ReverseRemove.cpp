#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;
using std::next;

int deleteElementByKey(vector<int>&datos, int key) {
    for (vector<int>::const_reverse_iterator it = datos.rbegin(); it != datos.rend(); ++it) {
        if (*it == key) {
            datos.erase(next(it).base());
            return key;
        }
    }
    return -1;
}


void print(std::vector<int> const vector) {
    for (auto const i : vector) {
        cout << i << " ";
    }
    cout << endl;
}


int main() {
    vector<int> datos;
    datos.push_back(3);
    datos.push_back(2);
    datos.push_back(1);

    print(datos);
    int deleted = deleteElementByKey(datos, 2);
    if (deleted == -1)
        cout << "Unable to delete." << endl; 
    else
        cout << "Deleted: " << deleted << endl;
    print(datos);

    return 0;
}
