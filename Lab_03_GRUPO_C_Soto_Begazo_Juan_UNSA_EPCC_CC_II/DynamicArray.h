#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include "Person.h"

class DynamicArray {
    private:
        int size;
        Person *arr;
    public:
        DynamicArray();
        DynamicArray(const Person arr[], int size);
        DynamicArray(const DynamicArray &o);

        void push_back(Person elem);
        void insert(Person elem, int pos);
        void remove(int pos);

        int getSize() const;
        ~DynamicArray();
};

#endif