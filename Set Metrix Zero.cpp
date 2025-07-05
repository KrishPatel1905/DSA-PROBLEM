#include <iostream>
using namespace std;

int main() {
    int row, col;


    int arr[row][col];

   
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    
    int rowMark[row] = {0};
    int colMark[col] = {0};

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                rowMark[i] = 1;
                colMark[j] = 1;
            }
        }
    }

    
    for (int i = 0; i < row; i++) {
        if (rowMark[i] == 1) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < col; j++) {
        if (colMark[j] == 1) {
            for (int i = 0; i < row; i++) {
                arr[i][j] = 0;
            }
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
