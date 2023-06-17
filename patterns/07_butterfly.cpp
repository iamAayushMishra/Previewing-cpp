#include <iostream>
using namespace std;

// Creating a butterfly pattern

/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

int main() {
    int n = 4;
    int col = 2 * n;

    // Upper half of the butterfly pattern
    for (int i = 1; i <= n; i++) {
        // Print asterisks in increasing order
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Print spaces in the middle
        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++) {
            cout << " ";
        }
        
        // Print asterisks in decreasing order
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    // Lower half of the butterfly pattern
    for (int k = n; k >= 1; k--) {
        // Print asterisks in increasing order
        for (int j = 1; j <= k; j++) {
            cout << "*";
        }
        
        // Print spaces in the middle
        int space = 2 * n - 2 * k;
        for (int l = 1; l <= space; l++) {
            cout << " ";
        }
        
        // Print asterisks in decreasing order
        for (int j = 1; j <= k; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}
