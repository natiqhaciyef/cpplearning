#include "iostream"
#include "list"


using namespace std;

#ifndef CPPLEARNING_COLLECTIONS_H
#define CPPLEARNING_COLLECTIONS_H

class CollectionTest {
public:
    void arrayListTest() {
        list<int> testList = {9, 8, 3, 5, 4};
        testList.push_back(12);
        testList.push_back(25);
        testList.remove(3);

        cout << testList.size() << endl;
        auto it = testList.begin();
        cout << "[ ";
        for (int i = 0; i < testList.size(); i++) {
            if (i == 0)
                cout << *it;
            else
                cout << *it.operator++();

            if (i != testList.size() - 1)
                cout << ", ";
            else
                cout << " ]";
        }
    }
};

class Node {
public:
    int data;
    Node *next;
    Node(int value): data(value), next(nullptr){

    }

};

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


#endif //CPPLEARNING_COLLECTIONS_H
