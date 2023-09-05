#include "iostream"

using namespace std;

#ifndef CPPLEARNING_STACK_H
#define CPPLEARNING_STACK_H

class Stack {
private:
    int *array;
    int capacity;
    int size;

public:
    Stack() {
        capacity = 10;
        array = new int[capacity];
        size = 0;
    }


    void add(int element) {
        if (size >= 10) {
            int *newArray = new int[capacity * 2];
            int *temp = array;
            for (int i = 0; i < size; ++i) {
                newArray[i] = array[i];
            }
            delete array;
            array = newArray;
        }

        array[size++] = element;
    }


    int getSize() {
        return size;
    };

    int getElement(int index) {
        if (index < size) {
            return array[index];
        } else {
            return -1;
        }
    }

    void remove() {
        int* newArray = new int[size--];
        for (int i = 0; i < size; ++i) {
            newArray[i] = array[i];
        }
    }

    void printStack() {
        cout << "Stack: [";
        for (int i = 0; i < size; ++i) {
            if (i != size - 1)
                cout << array[i] << ", ";
            else
                cout << array[i] << "]" << endl;
        }
    }
};


#endif //CPPLEARNING_STACK_H
