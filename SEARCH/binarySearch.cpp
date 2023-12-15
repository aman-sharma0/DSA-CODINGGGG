#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2; /* but this can cause
   integer overflow if say
   s = 2^31 -1(max range for +v integer)
   e = 2^31 -1(max range for +v integer)
   then in case (s+e) will go out the integer range.
   So to solve this we can use

        mid= s + (e-s)/2

   */

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        } // search in right

        mid = (start + end) / 2; //     mid= s + (e-s)/2
    }
    // if you are getting out of loop that means, element not found
    return -1;
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 2;

    int indexOftarget = binarySearch(arr, size, target);

    if (indexOftarget == -1)
    {
        cout << "Target Not Found!" << endl;
    }
    else
    {
        cout << "Target Found at " << indexOftarget << " index" << endl;
    }
    return 0;
}