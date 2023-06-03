#include<iostream>
using namespace std;


//instead of long lines of code short hand method wraps up code in one line
//syntax : variable = (condition) ? expressionTrue : expressionFalse;
int main() {

    //string denotes output is string type
    string result = (29>199) ? "If case\'s code" : "Else case\'s code";
    cout<<result<<endl;

    //here out put can be 1 or 0 so int case2
    int case2 = (177>176) ? 1 : 0;
    cout << case2;
}