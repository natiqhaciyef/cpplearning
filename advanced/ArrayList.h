#include "iostream"

using namespace std;

#ifndef CPPLEARNING_ARRAYLIST_H
#define CPPLEARNING_ARRAYLIST_H
class ArrayList{
private:
    int *array;
    int capacity;
    int size;

public:
    ArrayList(int initialCapacity = 10){
        this->capacity = initialCapacity;
        this->array = new int[initialCapacity];
        size = 0;
    }

    ~ArrayList(){
        delete[] array;
    }

    void add(int value){
        if (size >= capacity){
            capacity *= 2;
            int* newData = new int [capacity];
            for (int i = 0; i < size; ++i) {
                newData[i] = array[i];
            }
            delete[] array;
            array = newData;
        }

        array[size++] = value;
    }

    int get(int index){
        int element;
        if (index >= size || index < 0) {
            element = 0;
        }else{
            element = array[index];
        }

        return element;
    }

    int getSize(){
        return size;
    }
};


#endif //CPPLEARNING_ARRAYLIST_H
