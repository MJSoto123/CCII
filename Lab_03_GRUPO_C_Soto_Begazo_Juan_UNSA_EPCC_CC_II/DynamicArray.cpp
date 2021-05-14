#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    size = 0;
    arr = new Person[0];
}

DynamicArray::DynamicArray(const Person arr[], int size)
{
    this->size = size;
    this->arr = new Person[size];

    for (int i = 0; i < size; i++)
        this->arr[i] = arr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o)
{
    this->size = o.size;
    this->arr = new Person[o.size];

    for (int i = 0; i < size; i++)
        this->arr[i] = o.arr[i];
}

void DynamicArray::push_back(Person elem)
{
    Person *tmp = new Person[size + 1];
    for (int i = 0; i < size; i++)
        tmp[i] = arr[i];
    tmp[size] = elem;
    delete[] arr;
    size += 1;
    arr = tmp;
}

void DynamicArray::insert(Person elem, int pos)
{
    if (pos >= 0 && pos <= size + 1)
    {
        Person *tmp = new Person[size + 1];
        for (int i = 0; i < pos - 1; i++)
            tmp[i] = arr[i];
        tmp[pos - 1] = elem;
        for (int i = pos; i < size + 1; i++)
            tmp[i] = arr[i - 1];
        delete[] arr;
        size += 1;
        arr = tmp;
    }else{
        std::printf("Posición invalida");
    }
}

void DynamicArray::remove(int pos)
{
    if (pos >= 0 && pos <= size)
    {
        Person *tmp = new Person[size - 1];
        for (int i = 0; i < pos - 1; i++)
            tmp[i] = arr[i];
        for (int i = pos; i < size; i++)
            tmp[i - 1] = arr[i];
        delete[] arr;
        size -= 1;
        arr = tmp;
    }
    else
    {
        std::printf("Posicion invalida");
    }
}

int DynamicArray::getSize() const
{
    return size;
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}