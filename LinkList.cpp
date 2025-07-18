#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    struct node *link;    
};
struct node *first=NULL;
struct node *create(int n)
{
    struct node *t;
  t=new node();
    t->data=n;
    t->link=NULL;
    return t;
}
void insert_f()
{
    struct node *temp;
    int n;
    cin>>n;
    temp=create(n);
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        temp->link=first;
        first=temp;
    }
    
}
void insert_e()
{
    struct node *trav=first;
   int n;
    cin>>n;
    struct node *temp=create(n);
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        
    
    while(trav->link!=NULL)
    {
        trav=trav->link;
    }
    trav->link=temp;
       
}
}


void insert_m()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    struct node *temp;
    struct node *trav=first;
    temp= create(n);
    if(trav==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        
   
    while (trav != NULL && trav->data != x)
    {
        trav=trav->link;
    }
    
    temp->link=trav->link;
    trav->link=temp;
         }
}
void insert_d()
{
    node *temp;
    if(first==NULL)
    {
        cout<<"List is Empty";

    }
    else
    {
        temp=first;
        first=first->link;
        delete(temp);
    }
}
void display()
{
    struct node *temp;
    temp=first;
    if(first==NULL)
    {
        cout<<"List is Empty";
    }
    else{
        
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
        cout<<endl;
        }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int ch;
    
    
    do{
        
    cin>>ch;
    switch(ch)
    {
        case 1 :
            insert_f();
            break;
             case 2:
            insert_e();
            break;
        case 3:
            insert_m();
            break;
        case 4:
            insert_d();
            break;
        case 5:
            insert_d();
            break;
        case 6:
             display();
                 break;
        case 0:
            exit(0);
       
           
    }
    }while(ch!=0);
    
    
    return 0;
}
