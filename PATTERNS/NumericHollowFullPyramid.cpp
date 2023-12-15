#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // space
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        // numbers printing with space inbetween
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == n - 1)// for first row and last row
            { 
                if (col % 2 == 0)
                {
                    // even positon in row
                    cout << start;
                    start++;
                }
                else
                {
                    // odd positon in row
                    cout << " ";
                }
            }
            else// for middle rows
            { 
               if(col==0)
               {
                cout<<1;
               }
               else if(col==2*row){
                cout<<row+1;
               }
               else{
                cout<<" ";
               }
            }
        }
            cout<<endl;
    }

    return 0;
}