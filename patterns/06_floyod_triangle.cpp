#include <iostream>
using namespace std;

/*
n = 5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/



int main() {
    int n= 8;
    int counter = 1;
   

    for (int i= 1; i <=n; i++) {
        for (int j= 1; j <= i; j++) {
            cout<<counter<< " ";
            counter += 1;
        }
        cout<<endl;
    }

    return 0;
}