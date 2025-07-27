
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* root = nullptr;

void insert_at_beginning(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = root;
    root = new_node;
}

void insert_at_end(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (root == nullptr) {
        root = new_node;
        return;
    }

    Node* temp = root;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = new_node;
}

void insert_at_position(int index, int data) {
    if (index == 0) {
        insert_at_beginning(data);
        return;
    }

    Node* temp = root;
    for (int i = 0; i < index - 1 && temp != nullptr; i++)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Index out of bound\n";
        return;
    }

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;
}

void display() {
    Node* temp = root;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    insert_at_end(95);
    insert_at_end(75);
    insert_at_beginning(70);
    insert_at_position(1, 79);
    display();
    return 0;
}
