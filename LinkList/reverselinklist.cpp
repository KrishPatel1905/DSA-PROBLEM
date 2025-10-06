#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head = NULL;

node* create(int n) {
    node* temp = new node;
    temp->data = n;
    temp->link = NULL;
    return temp;
}

void insertBack(int n) {
    node* temp = create(n);
    if (head == NULL) {
        head = temp;
        return;
    }
    node* trav = head;
    while (trav->link != NULL)
        trav = trav->link;
    trav->link = temp;
}

void display() {
    node* trav = head;
    while (trav != NULL) {
        cout << trav->data << " ";
        trav = trav->link;
    }
    cout << endl;
}

void reverseList() {
    node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() {
    insertBack(10);
    insertBack(20);
    insertBack(30);
    insertBack(40);

    cout << "Original list: ";
    display();

    reverseList();

    cout << "Reversed list: ";
    display();

    return 0;
}
