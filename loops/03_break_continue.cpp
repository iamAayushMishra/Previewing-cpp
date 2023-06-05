#include <iostream>
using namespace std;


int main() {
    int i = 12;

    while (0<i) {
        if(i == 3){
            cout<<"Looks ends due to break";
            break;
        }
        cout<<i<<endl;
        i = i-1;
    }
}