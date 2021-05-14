#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main() {

    // DynamicArray p;
    // cout << "DynamicArray p" << endl;
    // cout << p.getSize() << endl;

    Person arr[4];
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << "q <---- Person arr[4]" << endl;
    DynamicArray q(arr, tam);
    cout << q.getSize() << endl << endl;

    cout << "q <---- Push_back p1" << endl;
    Person p1("Erick", 321654);
    q.push_back(p1);
    cout << q.getSize() << endl << endl;
    
    cout << "q <---- Insert p1 in pos 1" << endl;
    q.insert(p1, 1);
    cout << q.getSize() << endl << endl;

    cout << "q <---- Remove pos 4" << endl;
    q.remove(4);
    cout << q.getSize() << endl << endl;

    return 0;
}