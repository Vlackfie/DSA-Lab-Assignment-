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

int count_nodes() {
    int count = 0;
    Node* temp = root;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    insert_at_end(79);
    insert_at_end(95);
    insert_at_end(70);
    cout << "Total nodes: " << count_nodes() << "\n";
    return 0;
}
