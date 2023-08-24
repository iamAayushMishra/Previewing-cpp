#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int newS = n + m;
    int newArray[newS];

    

    while (true)
    {
        int counter = 0;
        for (int i = 1; i <= m; i++)
        {
            counter += 1;
            newArray[counter] = arr1[i];
        }

        for (int j = 1; j <= n; j++)
        {
            counter += 1;
            newArray[counter] = arr1[j];
        }
    }

    cout << newArray;
}

int main()
{
    // TODO: Add your code here
    int n = 4, arr1[] = {1, 3, 5, 7};
    int m = 5, arr2[] = {0, 2, 6, 8, 9};
    merge(arr1, arr2, n, m);
    return 0;
}