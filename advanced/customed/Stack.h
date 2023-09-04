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

    void removeElement(int element) {
        bool isContains = false;
        int indexToRemove = -1;
        for (int i = 0; i < size; ++i) {
            if (array[i] == element) {
                indexToRemove = i;
                isContains = true;
                break;
            }
        }

        if (isContains && indexToRemove != -1) {
            for (int i = indexToRemove; i < size; ++i) {
                array[i] = array[i + 1];
            }
            size--;
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
