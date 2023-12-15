#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for upper left triangle
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // for upper centre space holow pyramid

        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }

        // for upper right inverted triangle
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for lower part
    // half pyramid
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        // for inverted space holow pyramid
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        // half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
