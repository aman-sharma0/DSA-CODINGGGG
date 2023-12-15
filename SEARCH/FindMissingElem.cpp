#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int diff = 1;
    int check = (mid + 1) - mid;

    while (check != diff) {
        if (check == diff)
        {
            return v[check];
        }
        // else if()

        // }
    }
}

    int main()
    {

        vector<int> v{1, 2, 3, 4, 6, 7, 8};

        int MissingNum = missingNum(v);

        cout << "Missing Number is " << MissingNum << endl;

        return 0;
    }