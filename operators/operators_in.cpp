#include<iostream>
using namespace std;


// basic of operaters is same as of python + - * / % [ modulus returns reminder]
// two new type of operatiors
// let i = 1
// i++ = it would print i=1 but i would become 2 after its print 1
// ++i would print 2 as it makes i = 2

int main() {
    int i = 1;
    int j = 2;

    cout<<"Value of i when i++: "<<i++<<endl;
    cout<<"Value of i after i++: "<<i<<endl;

    cout<<"Value of j when ++j: "<<++j<<endl;

    cout<<"i+j "<<i+j<<endl;
    cout<<"i-j "<<i-j<<endl;
    cout<<"i*j "<<i*j<<endl;
    cout<<"i/j "<<i/j<<endl;
    cout<<"i%j "<<i%j<<endl;


    // assignment

    int x = 10; 
    x += 5; 
    //x become 15
    cout<<"x :"<<x<<endl;

    //comparision
    //1 = true ; 0 = false


    cout<<(i>j)<<endl; //Returs false as 2<3

    //logical 
    // and = &&
    // or = ||
    // not = !
    cout << ((i<j) && (j>1)) << endl; //returns 1 as True
}