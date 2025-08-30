#include <iostream>
using namespace std;

int arr[100];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == -1 && front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    arr[rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) {
        return -1;
    }
    int y = arr[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    return y;
}

int peek() {
    if (front == -1 || front > rear) {
        return -1;
    }
    return arr[front];
}

int isEmpty() {
    if (front == -1 || front > rear) {
        return 1;
    }
    return 0;
}

int main() {
    int n, ch, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        switch (ch) {
            case 1:
                cin >> x;
                enqueue(x);
                break;
            case 2:
                cout << dequeue() << endl;
                break;
            case 3:
                cout << peek() << endl;
                break;
            case 4:
                cout << isEmpty() << endl;
                break;
        }
    }
    return 0;
}
