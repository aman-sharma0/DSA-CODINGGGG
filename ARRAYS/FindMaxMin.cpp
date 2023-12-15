#include <iostream>
#include <limits.h>
using namespace std;

// Below function is for finding Maximum element
int getMax(int arr[3][3], int rows, int cols)
{
    int maxi = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
// Below function is for finding minimium element
int getMin(int arr[3][3], int rows, int cols)
{
    int mini = INT_MAX;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
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

    cout << "Maximum elemnts of an array is "<< getMax(arr, rows, cols) << endl;
    cout << "Minimum elemnts of an array is "<< getMin(arr, rows, cols);
    
    return 0;
}