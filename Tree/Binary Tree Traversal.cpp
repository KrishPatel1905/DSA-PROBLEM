#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node* create() {
    int x;
    cin >> x;
    if (x == -1) return NULL;

    node* p = new node();
    p->data = x;
    p->left = create();
    p->right = create();
    return p;
}

void preorder(node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void levelorder(node *root)
{
queue<node* > q;
    q.push(root);
    while(!q.empty())
    {
        struct node *temp;
        temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main() {
    cout<<"  ";
    node* root = create();  
    
    preorder(root);
    cout << endl;
    
    inorder(root);
    cout << endl;
    
    postorder(root);
    cout << endl;
    
    levelorder(root);
    
    return 0;
}
