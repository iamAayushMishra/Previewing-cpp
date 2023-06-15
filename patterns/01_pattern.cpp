#include <iostream>
using namespace std;

/*
task : print a completely filled star pattern 

eg - 
    Enter no of rows and column: 5 3
    * * * * * 
    * * * * *
    * * * * *
*/

int main() {
    int row, column;
    cout << "Enter no of rows and column: ";
    cin >> row >> column;

    //dont forget to initialize i = 0 else loop wont work
    for (int i=0; i<column; i++) {
        for (int j=0; j<row; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}