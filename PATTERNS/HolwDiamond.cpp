#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // For Upper Part of the Diamond
    for (int row = 0; row < n; row++)
    {
        // space1
        for (int space1 = 0; space1 < n - row - 1; space1++)
        {
            cout << " ";
        }
        // star1 + within spaces--------2*row+1 is for odd spaces within stars
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2 * row) // for last digit or character minus 1 in declaration of if condition i.e 2row+1
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // loop for second half

    for (int row = 0; row < n; row++)
    {
        // spaces2
        for (int space2 = 0; space2 < row; space2++)
        {
            cout << " ";
        }
        // star2 + within spaces------2*n-(2*row+1) = 2*n-2*row-1 is for odd spaces within stars
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            if (col == 0 || col == 2 * n - 2 * row - 2) // for last digit or character minus 1 in declaration of if condition i.e 2n-2row-1
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}