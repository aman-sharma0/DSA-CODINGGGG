#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{

    int a;
    cout << "Enter First Number"<<endl;
    cin >> a;

    int b;
    cout << "Enter Second Number"<<endl;
    cin >> b;

    int sum = Add(a, b);
    cout<<"The Sum is "<<sum<<endl;
    return 0;
}