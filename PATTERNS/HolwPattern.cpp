#include <iostream>
using namespace std;
int main()
{

    for (int row = 0; row < 3; row++)
    { // for first row and last row--> print 5*
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < 5; col++)
            {
                cout << "* ";
            }
        }
        // for remaining middle row--> print 1* ,  print 3 spaces , print 1*
        else
        { // print 1*
            cout << "* ";
            // print 3 spaces
            for (int space = 0; space < 3; space++)
            {
                cout << "  ";
            }
            // print 1*
            cout << "* ";
        }
        cout << endl;
    }
}
