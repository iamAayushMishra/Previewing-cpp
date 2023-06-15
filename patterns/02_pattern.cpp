#include <iostream>
using namespace std;

/*
task : print a completely hollow star pattern 

eg - 
    Enter no of rows and column: 5 3
    *****
    *   *
    *****
*/

int main() {
    int row, column;
    cout << "Enter no of rows and column: ";
    cin >> row >> column;

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            if (i == 0 || i == column - 1 || j == 0 || j == row - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
