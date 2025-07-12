#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        int total=0;
       
            cin>>a>>b;
    if(a==1)
    {
        cout<<b<<endl;
    }
    else{
        int c=a/6;
            float d=a/6.0;
            if(c<d)
            {
                c=c+1;
               total= c*b;
            cout<<total<<endl;
            }
            else
            {
                total= c*b;
                cout<<total<<endl;
            }
        
        
    }
    }
            
	// your code goes here

}
