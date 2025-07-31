#include<iostream>
struct node *first= NULL;

using namespace std;
struct node
{
    /* data */
    int data;
    struct node *link;

};
struct  node *create(int n)
{
   struct node *temp;
//    temp= (struct node*)malloc(sizeof( struct node));
     temp=new node;
   temp->data=n;
   temp->link =NULL;
   return temp;

}

void insertfornt()
{  int n;
    cin>>n;
    struct node *temp;
    temp=create(n);
    temp->link=first;
    first = temp;
}
void insertback()
{
  int n;
    cout << "Enter data: ";
    cin >> n;
    struct node* temp = create(n);

    if (first == NULL) {
        first = temp;
    } else {
        struct node* trav = first;
        while (trav->link != NULL) {
            trav = trav->link;
        }
        trav->link = temp;
    }

}
void display()
{
 struct node* temp = first;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}
 void insertmiddle()
 {
    
 }
int main()
{
    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
        insertfornt();
    
        break;
    case 2 :
    insertback();
    break;
    case 3:
        display();
        break;
    default:
        break;
    }
    return 0;
}