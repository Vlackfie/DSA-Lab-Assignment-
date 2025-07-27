#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* root = nullptr;

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

void delete_beginning() {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = root;
    root = root->next;
    delete temp;
}

void delete_end() {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (root->next == nullptr) {
        delete root;
        root = nullptr;
        return;
    }

    Node* temp = root;
    while (temp->next->next != nullptr)
        temp = temp->next;

    delete temp->next;
    temp->next = nullptr;
}

void delete_at_position(int index) {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (index == 0) {
        delete_beginning();
        return;
    }

    Node* temp = root;
    for (int i = 0; i < index - 1 && temp != nullptr; i++)
        temp = temp->next;

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Index out of bound\n";
        return;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
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
    insert_at_end(70);
    insert_at_end(75);
    insert_at_end(79);
    delete_beginning();
    delete_end();
    delete_at_position(0);
    display();
    return 0;
}

