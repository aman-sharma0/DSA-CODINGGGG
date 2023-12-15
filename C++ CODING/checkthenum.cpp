#include<iostream>
using namespace std;

int main()
{
    
    int arr[3]  ={1, -3, 4};

for (int i = 0; i<3; i++)
    if (arr[i]>0)
    {
        int cub = arr[i]*arr[i]*arr[i];
        cout<<cub<<endl;
        
    }
    else{
    int sq = arr[i]*arr[i];
    cout<<sq<<endl;
    }
}