#include <iostream>
using namespace std;

/*
output : - 
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/


int main() {
    // TODO: Add your code here
    int uInput;
    cin>> uInput;

    //main loop that run uInput times
    for (int mainLoop=uInput; mainLoop >= 1; mainLoop--) {
        //this loops print values of elements in col eg 1,2,3
        for (int cols= 1; cols <= mainLoop; cols++) {
            cout << cols << " ";
        }
        cout << endl;
        
    }
    return 0;
}