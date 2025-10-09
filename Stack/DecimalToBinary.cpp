#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    stack<int> s;

    
    while (n > 0) {
        s.push(n % 2);
        n /= 2;
    }

    cout << "Binary: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}
