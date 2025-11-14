#include<iostream>
#include<queue>

using namespace std;
struct node
{
    int data;
    node *left;
    node*right;
};
node* create()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    node *p = new node();
    p->data = x;
    p->left = create();
    p->right = create();
    
     return p;
}
void pre(node *root)
{
        if(root!=NULL)
        {
            cout<<root->data;
            pre(root->left);
            pre(root->right);
        }
}

void lev(node *root)
{
    if(root==NULL)return;

    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
       node *temp = q.front();
       q.pop();
       
       cout<<temp->data;

       if(temp->left){q.push(temp->left);}

       if(temp->right){q.push(temp->right);}

    

    }
}
void post(node *root)
{
        if(root!=NULL)
        {
            post(root->left);
              post(root->right);
            cout<<root->data;
            
          
        }
}

void in(node *root)
{
        if(root!=NULL)
        {
            pre(root->left);
            cout<<root->data;
            
            pre(root->right);
        }
}


int main()
{
    node *root = create();


        pre(root);
    cout << endl;

    in(root);
    cout << endl;

    post(root);
    cout << endl;

    lev (root);
    cout << endl;

}