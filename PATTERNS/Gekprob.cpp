#include <iostream>
using namespace std;
int main()
{
    int N = 3;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for(int space=0;space<1;space++)
        {
            cout << " ";
        }
    }

    return 0;
}