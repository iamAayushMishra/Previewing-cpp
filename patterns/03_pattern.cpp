#include <iostream>
using namespace std;

// Enter no of rows and column: 5 7
// *******
// * * * *
// *******
// * * * *
// *******

int main() {
    int row, column;
    cout << "Enter no of rows and column: ";
    cin >> row >> column;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            // Check if the row index 'i' is even or the column index 'j' is even
            if ((i % 2 == 0) || (j % 2 == 0)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
