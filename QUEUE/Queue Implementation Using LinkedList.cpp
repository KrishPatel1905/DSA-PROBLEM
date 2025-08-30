#include <iostream>
using namespace std;

int arr[100];


struct node {
    int data;
    struct node* link;
};
struct node *rear=NULL;
struct node *front=NULL;
struct node* create(int n)
{
    struct node *temp=new node();
    temp->data=n;
    temp->link=NULL;
    return temp;
    
}

void enqueue(int x) {
    struct node *temp=create(x);
    if(rear==NULL)
    {
        front =rear = temp;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
   
}

int dequeue() {
    if(front==NULL){
        return -1;
    }
    int val=front->data;
    struct node* temp=front;
    front =front->link;
    if(front==NULL)
    {
        rear=NULL;
    }
    delete temp;
    return val; 
 
}

int peek() {
    if(front==NULL)
    {
        return -1;
    }   
    return front->data;
  
}

int isEmpty() {
    if (front == NULL || front > rear) {
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
