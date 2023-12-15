#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // assume, mid is at 4 index = 7
        if (mid + 1 < v.size() && v[mid] > v[mid + 1]) // for two elemets which are breaking sortedness
        {
            return mid; // mid + 1 < v.size() && <--- THIS Is to avoid overflow, if mid is at last index of an 
        }                                          // array then mid +1 is not possible and will throw an error!

        // assume, mid is at 5 index = 1
        if (mid - 1 >= v[0] && v[mid - 1] > v[mid]) // for two elemets which are breaking sortedness
        {
            return mid - 1; // mid - 1 >= v[0] && <--- THIS Is to avoid overflow, if mid is at 0th index of an 
        }                                          // array then mid - 1 is not possible and will throw an error!
        

        // NOW WE CAN SEARCH LEFT OR RIGHT
        if (v[s] >= v[mid])
        { // searching left
            e = mid - 1;
        }

        else if (v[s] < v[mid])
        { // searching right
            s = mid + 1;
        }

        int mid = s + (e - s) / 2; // updating mid is mandatory
    }

    return s;
}

int main()
{

    vector<int> v{3, 4, 5, 6, 7, 1, 2};
    int ans = findPivot(v);

    cout << "The pivot number is " << v[ans] << " and it is at index " << ans;

    return 0;
}