#include <iostream>
using namespace std;

/*
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/



int main() {
    // TODO: Add your code here
    int n = 5;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            //if sum of row+col is even then print 1 else 0
            if ((col + row)%2 == 0) {
                cout << "1" << " ";

            } else {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}