#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int n=100;
int s[n];
int top=-1;
void push(int x)
{

   if(top<=99)
    {
        top++;
        s[top]=x;
    }
}
int pop()
{
    
  if(top==-1)
    {
        return -1;
    }
    else
    {
        int x= s[top];
        top--;
        return x;
    }
}
int peek()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
    return s[top];
    }
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
  int ch;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        int x;
        switch(ch)
        {
            case 1:
                
                cin>>x;
                push(x);
                break;
            case 2:
               x= pop();
                cout<<x<<endl;
                break;
            case 3:
               x= peek();
                  cout<<x<<endl;
                
                break;
            case 4:
                x=isEmpty();
                cout<<x<<endl;
                break;
        }
    }
    return 0;
}
