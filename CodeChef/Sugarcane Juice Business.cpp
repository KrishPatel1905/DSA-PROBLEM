#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int total_income = n * 50;
        double sugarcane_cost = 0.2 * total_income;
        double salt_mint_cost = 0.2 * total_income;
        double rent_cost = 0.3 * total_income;
        double profit = total_income - (sugarcane_cost + salt_mint_cost + rent_cost);
        cout << (int)profit << endl;
    }
    return 0;
}