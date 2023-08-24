#include <iostream>
using namespace std;

// Enter no of rows you want: 5
// *
// **
// ***
// ****
// *****

int main() {
    // TODO: Add your code here
    int row;
    cout << "Enter no of rows you want: ";
    cin >> row ;

    for (int i=1; i <= row; i++) {
        for (int j=1; j <= row; j++) {
            if(j <= row - i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}