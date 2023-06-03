#include<iostream>
using namespace std;


int main() {
    int currentTime;

    cout<<"Enter Time in [hrs] in 24hrs format: ";
    cin>>currentTime;

    if (currentTime < 12) {
        cout<<"Good morning";
    } else if (currentTime >= 12 && currentTime < 16){
        cout<<"Good Afternoon";

    } else {
        cout<<"Good Evening";
    }
}