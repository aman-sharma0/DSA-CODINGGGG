#include <iostream>
#include <cmath>
using namespace std;

// //Divison Method
// int FindBinary1(int num)
// {
//   int answer = 0;
//   int i=0;
//   while(num>0){
//     int bit = num%2;
//     answer = (bit*pow(10,i))+answer;
//     num/=2;
//     i+=1;
//   }
//   return answer;
// }

// int main()
// {

//   int n;
//   cin >> n;

//   int Binary = FindBinary1(n);

//   cout << Binary << endl;

//   return 0;
// }



// //Binary Method
// int FindBinary2(int num)
// {
//   int answer = 0;
//   int i=0;
//   while(num>0){
//     int bit = (num&1);
//     answer = (bit*pow(10,i++))+answer;
//     num=num>>1;

//   }
//   return answer;
// }
// int main()
// {

//   int n;
//   cin >> n;

//   int Binary = FindBinary2(n);

//   cout << Binary << endl;

//   return 0;
// }

//THESE CODES ARE CORRECT BUT NOT WORKING ON VS CODE


int FindDecimel(int num)
{
  int answer = 0;
  int i=0;
  while(num>0){
    int bit = num&1;
    answer =  ( bit*pow(2,i++) ) + answer;
    num=num/10;
  
  }
  return answer;
}
int main()
{

  int n;
  cin >> n;

  int Binary = FindDecimel(n);

  cout << Binary << endl;

  return 0;
}
