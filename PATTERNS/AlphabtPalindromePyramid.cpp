#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        
        for(int col =0;col<row+1;col++)
        {
            cout<<col+1;
        }
        //reversing onwards
       

        for(int col=row; col>=1;col--)
        {
            cout<<col;
        }
        cout<<endl;

    }
    return 0;
}