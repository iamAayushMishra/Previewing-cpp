#include <iostream>
using namespace std;

/*
     1 
    1 2 
   1 2 3 
  1 2 3 4 
 1 2 3 4 5 
*/


int main() {
    // TODO: Add your code here
    int n = 10;

    for (int i = 1; i <= n; i++) {
        // printing spaces
        for (int j = n - i; j >= 0; j--) {
            cout << " ";
        }

        // printing nums
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}