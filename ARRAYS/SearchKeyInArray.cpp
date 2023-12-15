#include <iostream>
using namespace std;

bool findKey(int arr[3][3], int rows, int cols, int key)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    //Once traversing all rows, if value is not present then
    return false;
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

    int key;
    cout << "Enter the key you want to search " << endl;
    cin>>key;

    cout << "Your Serached key is ";
    if(findKey(arr, rows, cols, key)){
        cout<<"PRESENT in array"<<endl;
    }
    else{
        cout<<"ABSENT in array"<<endl;
    }

    return 0;
}