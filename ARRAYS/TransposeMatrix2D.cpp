#include <iostream>
#include <limits.h>
using namespace std;

void transposeMatrix(int arr[][3], int rows, int cols, int transpose)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[i][j] = arr[j][i];
        }
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

    ///////////////////////////////////////////////////
    int trans[3][3];
    cout<<"the Transposed output";
    transposeMatrix(arr, rows, cols, trans[3][3]);

        return 0;
}