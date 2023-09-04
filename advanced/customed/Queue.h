#include "iostream"

using namespace std;

#ifndef CPPLEARNING_QUEUE_H
#define CPPLEARNING_QUEUE_H

class Node{
public:
    int data;
    Node *next;

    Node(int value): data(value), next(nullptr){

    }
};

class Queue{
    Node* front;
    Node* current;

public:
    Queue(): front(nullptr), current(nullptr){}

    ~Queue(){
        while(!isEmpty()){
            dequeue();
        }
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(int value){
        Node* newNode = new Node(value);
        if (isEmpty()){
            front = current = newNode;
        }else{
            current->next = newNode;
            current = newNode;
        }

    }

    void dequeue(){
        if (isEmpty()){
            cout << "Queue is empty";
            return;
        }

        Node *temp = front;
        front = front->next ;
        delete temp;
    }

    int getFront(){
        if (isEmpty()){
            cout << "Queue is empty";
            return -1;
        }
        return front->data;
    }
};

#endif //CPPLEARNING_QUEUE_H
