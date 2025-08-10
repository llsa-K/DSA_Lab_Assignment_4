#include <iostream>
using namespace std;

// Node structure for Singly Linked List
struct Node {
    int data;      // Data part
    Node* next;    // Pointer to next node

    // Constructor (optional, for convenience)
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
