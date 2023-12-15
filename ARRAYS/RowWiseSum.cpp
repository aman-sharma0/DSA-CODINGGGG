#include <iostream>
using namespace std;

int printRowWiseSum(int arr[3][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " " << endl;
    }
}

int main()
{

    int arr[3][3]; // Declaration of 2d array
    int rows = 3;  // size of array;
    int cols = 3;  // size of array;

    // loop for taking input of array
    cout << "Enter the elemnts of your 2d array " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing loop for array (It is not neccessary, but just to see how our array is looking.)
    cout << "Your Entered Array is " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "SUM OF Row-wise elemnts of an array is " << endl;
    printRowWiseSum(arr, rows, cols);

    return 0;
}