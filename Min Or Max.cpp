#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int operations = 0;       
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minimum = a[0];
       
        for (int i = 1; i < n; i++)
        {
            if (a[i] < minimum)
            {
                minimum = a[i];
            }
        }

       
        for (int i = 0; i < n; i++)
        {
            if (a[i] > minimum)
            {
                operations++;
            }
        }

        cout << operations << endl;
    }
    return 0;
}
