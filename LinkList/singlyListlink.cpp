#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
};

node* first = NULL;

node* create(int n) {
    node* temp = new node;
    temp->data = n;
    temp->link = NULL;
    return temp;
}

void insertfront() {
    int n;
    cout << "Enter value to insert at front: ";
    cin >> n;
    node* temp = create(n);
    temp->link = first;
    first = temp;
}

void insertback() {
    int n;
    cout << "Enter value to insert at back: ";
    cin >> n;
    node* temp = create(n);
    if (first == NULL) {
        first = temp;
    } else {
        node* trav = first;
        while (trav->link != NULL) {
            trav = trav->link;
        }
        trav->link = temp;
    }
}

void display() {
    node* trav = first;
    if (trav == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    cout << "Linked list elements: ";
    while (trav != NULL) {
        cout << trav->data << " ";
        trav = trav->link;
    }
    cout << endl;
}

int main() {
    int ch;
    cout << "1. InsertFront\n2. InsertBack\n3. Display\nEnter your choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            insertfront();
            break;
        case 2:
            insertback();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
