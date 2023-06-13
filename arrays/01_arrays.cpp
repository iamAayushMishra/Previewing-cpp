#include <iostream>
using namespace std;

int main() {

    //specified type/no of items in array
    string companies[4] ={"Audi", "BMW", "Apple", "Microsoft"};


    //It can be defined without noOfItems eg- [3]
    string faang[] = {"Facebook", "Apple", "Amazon", "Netflix", "google"};

    cout << faang[2]<<endl;

    cout << companies[1]; //prints BMW
}