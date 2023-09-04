#include "iostream"

using namespace std;

#ifndef CPPLEARNING_LINKEDLIST_H
#define CPPLEARNING_LINKEDLIST_H

class Node {
public:
    int data;
    Node *next;
    Node(int value): data(value), next(nullptr){

    }

};

// custom linked list
class LinkedList {
private:
    Node *head, *tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void addNode(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif //CPPLEARNING_LINKEDLIST_H
