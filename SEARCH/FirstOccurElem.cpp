#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> vec, int target)
{
    int s = 0;
    int e = vec.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (vec[mid] == target)
        {
            // (a) store the index into ans variable
            // (b) and search in left side

            ans = mid;
            e = mid - 1;
        }
        else if (target < vec[mid])
        {
            // search in left
            e = mid - 1;
        }
        else if (target > vec[mid])
        { // search in right
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}


int main()
{

    vector<int> vec{1, 3, 2, 5, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int indexOfFirstOccur = firstOccurence(vec, target);
    cout << "Ans is " << indexOfFirstOccur << endl;

    return 0;
}