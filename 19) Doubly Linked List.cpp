#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* root = nullptr;

void insert_begin(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->prev = nullptr;
    new_node->next = root;
    if (root != nullptr)
        root->prev = new_node;
    root = new_node;
}

void insert_end(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;
    new_node->prev = nullptr;
    if (root == nullptr) {
        root = new_node;
        return;
    }
    Node* current = root;
    while (current->next != nullptr)
        current = current->next;
    current->next = new_node;
    new_node->prev = current;
}

void display() {
    Node* current = root;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}

int main() {
    insert_end(75);
    insert_end(95);
    insert_begin(79);
    insert_end(70);
    display();
    return 0;
}
