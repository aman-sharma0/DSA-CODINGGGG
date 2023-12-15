#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        // see we want peak element means Largest element so below conditon means mid couldn't be greater than Mid+1, so
        //we have to search right side (not left side coz there will be smallest numbers.
        if (v[mid] < v[mid + 1]) 
        {
            // search right
            s = mid + 1;
        }
      
        else
        {
            e = mid; // if we are using = sign in mid, then remove = in while loop to avoid infinte loop.
        }
        return e;
        
    }
}

int main()
{

    vector<int> v{0, 10, 20, 5, 2};
    int ans = findPeak(v);
    cout << "The peak is " << v[ans] << " and is at index " << ans;

    return 0;
}