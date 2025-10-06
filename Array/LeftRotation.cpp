#include <iostream>
#include <vector>
using namespace std;

void LeftRotaion(int arr[], int n, int d) {
    if (n == 0) return;
    d = d % n;
    if (d == 0) return;
    vector<int> temp(d);
    for (int i = 0; i < d; ++i){ temp[i] = arr[i];}
    for (int i = d; i < n; ++i) arr[i - d] = arr[i];
    for (int i = 0; i < d; ++i) arr[n - d + i] = temp[i];
}

int main()
{
    int n;
    cout << "Enter The Element of Array :";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int d;
    cout << "Enter the Number Of  Rotation :";
    cin >> d;

    LeftRotaion(arr.data(), n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}