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

void search_element(int value) {
    Node* temp = root;
    int index = 0;
    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Found at index " << index << "\n";
            return;
        }
        temp = temp->next;
        index++;
    }
    cout << "Not Found\n";
}

int main() {
    insert_at_end(95);
    insert_at_end(75);
    insert_at_end(79);
    search_element(70);
    search_element(75);
    return 0;
}
