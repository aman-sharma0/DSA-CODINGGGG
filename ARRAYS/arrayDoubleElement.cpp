#include <iostream>
using namespace std;
int main()
{

    int arr[500];

    int n;
    cout<<"how many numbers you want to add in array"<<endl;
    cin>>n;

    cout<<"Enter the numbers"<<endl;
  
//taking input values of all array elements 
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }

    // throwing double output
    for(int i =0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }
}