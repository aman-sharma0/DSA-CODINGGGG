#include <iostream>
using namespace std;
int getEvenSum(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i = i + 2)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{

    int n;
    cout << "Enter the value of N" << endl;
    cin >> n;
    int finalSum = getEvenSum(n);
    cout << "Sum of even numbers upto " <<n<<" is "<< finalSum << endl;

    return 0;
}