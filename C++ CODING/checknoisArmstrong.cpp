#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int originalnum = n;

    while (n > 0)
    {

        int digit = n % 10;

        sum += (digit * digit * digit);

        // removing last digit from the orignal number
        n /= 10;
    }

    if ( originalnum ==sum)
        cout <<  originalnum << " is an Armstrong number.";
    else
        cout <<  originalnum << " is not an Armstrong number.";

    return 0;
}