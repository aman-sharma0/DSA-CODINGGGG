#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    // creating vector

    vector<int> arr(n);

    // taking input of the elements of vector
    cout << "Enter the elements" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout << "Unique number is " << uniqueElement << endl;

    return 0;
}