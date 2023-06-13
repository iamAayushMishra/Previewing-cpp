#include <iostream>
using namespace std;


int main(){
    string statesOfIndia[] = {"Gujarat", "Punjab", "Up" ,"Bihar", "Delhi", "Karnataka", "Tamil Nadu", "Jharkhand"};

    int _len = 0; 
    
    for (int i = 0; i<8; i++) {
        cout<<statesOfIndia[i]<<"\n";
    }

    //another way to do this [for-each loop]
    for (string i : statesOfIndia) {
        cout << i << endl;
    }

    //size of aray in bytes
    cout << sizeof(statesOfIndia)<< endl;

    //to find size of array divide by size of data type
    cout << sizeof(statesOfIndia) / sizeof(string) << endl;

    return 0;

}