#include <iostream>
using namespace std;

/*Centered kite pattern

                1 
              2 1 2
            3 2 1 2 3
          4 3 2 1 2 3 4 
        5 4 3 2 1 2 3 4 5
      6 5 4 3 2 1 2 3 4 5 6
    7 6 5 4 3 2 1 2 3 4 5 6 7
  8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 
  8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
    7 6 5 4 3 2 1 2 3 4 5 6 7
      6 5 4 3 2 1 2 3 4 5 6 
        5 4 3 2 1 2 3 4 5
          4 3 2 1 2 3 4 
            3 2 1 2 3
              2 1 2
                1 

*/

int main()
{
    // TODO: Add your code here
    int n = 9;

    // upper triangle
    for (int i = 1; i <= n; i++)
    {

        // Printing spaces
        for (int j = n - i; j >= 1; j--)
        {
            cout << "  ";
        }

        // printing numbers in inc. order
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }

        // printing no in dec order
        for (int l = 2; l <= i; l++)
        {
            cout << l << " ";
        }

        // line break
        cout << endl;
    }

    for (int i = n-1; i >= 1; i--)
    {

        // Printing spaces
        for (int j = n - i; j >= 1; j--)
        {
            cout << "  ";
        }

        // printing numbers in inc. order
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }

        // printing no in dec order
        for (int l = 2; l <= i; l++)
        {
            cout << l << " ";
        }

        // line break
        cout << endl;
    }
    return 0;
}