#include <iostream>
using namespace std;

// Enter the no of rows you want : 6
// *
// **
// ***
// ****
// *****
// ******


int main() {
    // TODO: Add your code here
    int rows;
    
    cout << "Enter the no of rows you want : ";
    cin >> rows;

    for (int i=1 ; i <= rows; i++){
        for (int j=1; j <= i; j++) {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}