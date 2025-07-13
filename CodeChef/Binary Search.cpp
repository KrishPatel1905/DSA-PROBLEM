#include <iostream>
using namespace std;

int c = 0; 

int bs(int a[], int key, int l, int h)
{
    c++;
    if(l > h)
    {
        return -1;
    }
    int m = (l + h) / 2;
    
    if(a[m] == key)
    {
        return m;
    }
     
    if(a[m] > key)
    {
        return bs(a, key, l, m - 1);
    }
    else
    {
        return bs(a, key, m + 1, h);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
    }
    int k;
    cin >> k;

    int index = bs(arr, k, 0, n - 1);

    if(index == -1)
    {
        cout << "Not submitted";
    }
    else
    {
        cout << brr[index] << endl;
        cout << c;
    }

    return 0;
}