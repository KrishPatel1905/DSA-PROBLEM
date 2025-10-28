#include <bits/stdc++.h>
using namespace std;
int main() {
    int num = 1234, sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum;
}
