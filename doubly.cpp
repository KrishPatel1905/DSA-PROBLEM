#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int info;
    struct node *lptr;
    struct node *rptr;
      struct node *r;
    struct node *l;
};
  struct node *r=NULL;
    struct node *l=NULL;
// struct node*first

struct node *create(int n)
{
          struct node *temp;
    
    temp= new node();
    temp->info=n;
    temp->lptr=NULL;
    temp->rptr =NULL;
    return temp;
  
}
void insert_f()
{
   int n;
    cin>>n;
   struct node *temp;
    temp=create(n);
        if(l==NULL)
        {
            l=temp;
            r=temp;
            
        }
    else
    {
        temp->rptr=l;
        l->lptr=temp;
        l=temp;
    }
}
void insert_e()
{
    int n;
    cin>>n;
    struct node *temp;
    temp=create(n);
    if(r==NULL)
    {
        l=temp;
        r=temp;
    }
    else
    {
        temp->lptr=r;
        r->rptr=temp;
        r=temp;
    }
}



 void insert_da()
{
       struct node *temp;
    if(r==NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else if(l==r)
    {
        temp=r;
        free(temp);
        l=NULL,r=NULL;
    }
    else
    {
        temp=r;
        r=r->lptr;
        free(temp);
        r->rptr=NULL;
    }

    
}
void insert_df()
{
 
    struct node *temp;
    if(l==NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else if(l==r)
    {
        temp=l;
        free(temp);
        l=NULL,r=NULL;
    }
    else
    {
        temp=l;
        l=l->rptr;
        free(temp);
        l->lptr=NULL;
    }

}
 void de_m()
 {
     int x;
     cin>>x;
     struct node *trav=l;
     while(trav->info!=x)
     {
         trav=trav->rptr;
     }
     // trav->lptr->rptr=trav->rptr;
     trav->rptr->lptr=trav->lptr;
 }
void display()
{
 struct node *trav=l;
    while(trav!=NULL)
    {
        cout<<trav->info<<" ";
        trav=trav->rptr;
    }
    cout<<endl;
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
            insert_df();
            break;
        case 4:
           insert_da();
            break;
        case 5:
            de_m();
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
