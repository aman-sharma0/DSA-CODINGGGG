#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr)
{

    int size = arr.size() - 1;

    if (arr[0] != 1)
        return 1;

    if (arr[size - 1] != (size + 1))
        return size + 1;

    int s = 0;

    int e = size - 1;

    int mid;

    while ((e - s) > 1)
    {
        mid = (s + e) / 2;
        if ((arr[s] - s) != (arr[mid] - mid))
            e = mid;
        else if ((arr[e] - e) != (arr[mid] - mid))
            s = mid;
    }
    return (arr[s] + 1);
}



int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 8};

    cout << "Missing number: " << search(arr);
}