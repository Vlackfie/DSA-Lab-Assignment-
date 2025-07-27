#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int myQueue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    myQueue[++rear] = value;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }
    front++;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << myQueue[i] << " ";
    }
    cout << "\n";
}

int main() {
    enqueue(75);
    enqueue(70);
    enqueue(95);
    enqueue(79);
    dequeue();
    display();
    return 0;
}
