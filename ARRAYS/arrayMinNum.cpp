#include<iostream>
#include<limits.h>
using namespace std;
int main()
{

    int arr[]={ 1, 2, 4, 6, 8, 3, 99};
    int size = 8;

//intialise the mini variable 
//with the minimum possible integer value
int mini = INT_MAX;

for(int i= 0; i<size; i++){
    if(arr[i]<mini)
    //found greter number than maxi, update maxi
    mini=arr[i];
}
cout<<"Maximum number is "<<mini<<endl;

    return 0;
}