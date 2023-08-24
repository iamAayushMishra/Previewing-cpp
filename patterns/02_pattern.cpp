#include <iostream>
using namespace std;

/*
task : print a completely filled star pattern 

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

    // Loop over each column
    for (int i = 0; i < column; i++) {
        // Loop over each row
        for (int j = 0; j < row; j++) {
            // Check if current position is on the edges of the pattern
            if (i == 0 || i == column - 1 || j == 0 || j == row - 1) {
                // Print a "*" character if on the edges
                cout << "*";
            } else {
                // Print a space character for the hollow center
                cout << " ";
            }
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
