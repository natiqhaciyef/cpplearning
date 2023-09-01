#include "iostream"

using namespace std;

#ifndef CPPLEARNING_SET_H
#define CPPLEARNING_SET_H

class Set {
private:
    int size;
    int capacity;
    int *array;

public:
    Set(int capacity = 10) {
        this->capacity = capacity;
        array = new int[10];
        size = 0;
    }

    void add(int value) {
        bool isContains = false;
        if (capacity <= size) {
            capacity = capacity * 2;
            int *newArray = new int[capacity];
            for (int i = 0; i < size; ++i) {
                newArray[i] = array[i];
            }

            delete array;
            array = newArray;
        }

        for (int i = 0; i < size; ++i) {
            if (array[i] == value)
                isContains = true;
        }

        if (!isContains)
            array[size++] = value;
        else
            cout << "Set cannot add same element" << endl;
    }

    void remove(int element) {
        if (isContains(element)) {
            int *newArray = new int[size - 1];
            int counter = 0;
            for (int j = 0; j < size; ++j) {
                if (array[j] != element) {
                    newArray[counter] = array[j];
                    counter++;
                }
            }
            delete array;
            array = newArray;
        } else {
            cout << "Element does not found" << endl;
            return;
        }

        size = size - 1;
    }

    bool isContains(int value) {
        for (int i = 0; i < size; ++i) {
            if (array[i] == value) {
                return true;
            }
        }
        return false;
    }

    int get(int index) {
        return array[index];
    }

    int getSize() {
        return size;
    }
};


#endif //CPPLEARNING_SET_H
