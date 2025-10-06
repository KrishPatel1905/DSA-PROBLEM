#include<iostream>
using namespace std;
void Rightrotaion(int arr[],int n,int d)
{
    d = d % n;
    int temp[d];

    
    for (int i = 0; i < d; i++)
        temp[i] = arr[n-d+i];
        
        for(int i=n-1;i>=0;i++)
        {
            arr[i+d]=arr[i];
        }
        for(int i=0;i<d;i++)
        {
            arr[i]=temp[i];
        }

}

int main() {
    int n, d;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number of positions to rotate left: ";
    cin >> d;

  Rightrotaion(arr, n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}