#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *first = NULL;
struct node *create(int n)
{
    struct node *temp;
    temp = new node;
    temp->data = n;
    temp->link = NULL;
    return temp;
}
void insert_fornt()
{
    int n;
    cout << "Enter the Value of n:";
    cin >> n;
    struct node *temp;
    temp = create(n);
    temp->link = first;
    first = temp;
}
void insert_back()
{
    int n;
    cout << "Enter the Value of n:";
    cin >> n;
    struct node *trav = first;

    struct node *temp;
    temp = create(n);
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        while (trav->link != NULL)
        {
            trav = trav->link;
        }
        trav->link = temp;
    }
}
void display()
{
    struct node *trav=first;
    cout<<"List is :";
    while (trav->link==NULL)
    {
        cout<<trav->data<<" ";
        cout<<trav->link<<endl;

    }
    
}
void deleted() {
    int n;
    cout << "Enter the element to be deleted: ";
    cin >> n;

    struct node* temp = first;
    struct node* prev = nullptr;

   
    while (temp != nullptr && temp->data != n) {
        prev = temp;
        temp = temp->link;
    }

    
    if (temp == nullptr) {
        cout << "Element not found!" << endl;
        return;
    }

    
    if (prev == nullptr) {
        first = first->link;
        delete temp;
    } else {
        prev->link = temp->link;
        delete temp;
    }

    cout << "Element deleted successfully." << endl;
}


int main()
{
    int ch;
    cout<<"Wnter tthe choice :   1.Insertfornt\n 2.InsertBack \n 3.Display\n 0.exit ";
    cin >> ch;
    do
    {
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            insert_fornt();

            break;
        case 2:
            insert_back();
        case 3:
            display();
        default:
            break;
        }
        /* code */
    } while (ch != 0);

    return 0;
}