#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
node*top = NULL;
 void push(int x)
 {
    node * temp= new node();
    temp->data =x;
    temp->next = top;
    top = temp;

 }
 void pop()
 {
    if(top==NULL)
    {cout<<"Stack is Empty :";}
    else{
        node* temp = new node();
        temp = top;
        cout<<temp->data<<endl;
        top = top->next;
        delete temp;
    }
 }

 void display()
 {
        if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    node *temp = top;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

 }
int main()
{
        int ch, value;

    do {
        cin >> ch;

        switch (ch) {
            case 1:
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;
            case 3:
               display();
               break;

            case 0:
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while (ch != 0);

    return 0;

}