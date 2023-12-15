#include<iostream>
#include<limits.h>
using namespace std;
int main()
{

    int arr[]={ 1, 2, 4, 6, 8, 0 ,3, 99};
    int size = 8;

//intialise the maxi variable 
//with the minimum possible integer value
int maxi = INT_MIN;

for(int i= 0; i<size; i++){
    if(arr[i]>maxi)
    //found greter number than maxi, update maxi
    maxi=arr[i];
}
cout<<"Maximum number is "<<maxi<<endl;

    return 0;
}