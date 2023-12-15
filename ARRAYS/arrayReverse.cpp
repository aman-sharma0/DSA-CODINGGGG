#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;

    // declaring start point and end point
    //  indices in array
    int start = 0;
    int end = size - 1;

    while (true)
    {
        if (start > end)
        {
            break;
        }
        if (start == end)
        {
            cout << start << " ";
        }
        else
        {
            swap(arr[start], arr[end]);
        }

        start++;
        end--;
    }

    // printing the output
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}