#include <iostream>
#include <cmath>
using namespace std;


float num1, num2;
char _operator;
char userChoice;


float _addNums(float num1,float num2) {
    return num1 + num2;
}


float _subNums(float num1,float num2) {
    return num1 - num2;
}


float _multiply(float num1,float num2) {
    return num1 * num2;
}


float _divide(float num1,float num2) {
    return num1 / num2;
}




int main()
{

    bool _flag = true;

    while (_flag == true)
    {
        

        cout << "Welcomme to Calc in Cpp" << endl;
        cout << "Enter your query in the following format\nnum1 operator num2: ";
        cin >> num1 >> _operator >> num2;

        // function calling goes here
        cout<<"Result"<<endl;

        float _result;

        switch (_operator)
        {
        case '+':
            /* code */
             _result = _addNums(num1,num2);
            cout << "Result: " << _result << endl;
            break;
        
        case '-':
            /* code */
             _result = _subNums(num1,num2);
            cout << "Result: " << _result << endl;
            break;
        
        case '*':
            /* code */
             _result = _multiply(num1,num2);
            cout << "Result: " << _result << endl;
            break;
        
        case '/':
            /* code */
            if (num2 != 0) {
                 _result = _divide(num1,num2);
                cout << "Result: " << _result << endl;
            } else {
                cout<<"Cannot divide by zero" <<endl;
            }
            
            break;
        

        default:
            cout << "Please provide a valid operator and try again\n\n";
            break;
        }

        cout<<"enter y to continue else n to exit: ";
        cin>>userChoice;

        if (userChoice == 'n') {
            cout<<"Have a nice day!";
            break;
        }
    }

    return 0;
}
