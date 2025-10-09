    #include <iostream>
#include <stack>
using namespace std;

bool isValidParentheses(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;

    if (isValidParentheses(s))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
