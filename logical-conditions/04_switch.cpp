#include<iostream>
using namespace std;


int main() {
    int colour;

    cout<<"Input a Num: ";
    cin>>colour;

    switch (colour){

    case 1:
        cout<<"Violet";
        break;
    
    case 2:
        cout<<"Blue";
        break;
    
    case 3:
        cout<<"Green";
        break;
    
    case 4:
        cout<<"yellow";
        break;
    
    //incase no match - default 
    default:
        cout<<"Black and white";
        break;
    }
}