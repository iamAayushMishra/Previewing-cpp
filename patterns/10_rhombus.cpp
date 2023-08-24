#include <iostream>
using namespace std;

/*

     * * * * * 
    * * * * *  
   * * * * *   
  * * * * *    
 * * * * *  

*/

int main() {
    // TODO: Add your code here
    int n = 12;

    for (int i= n; i >= 1; i--) {
        //loop to add spaces
        for (int space = i-1; space >=0; space--) {
            cout << " ";
        }

        //loop for rhombus
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}