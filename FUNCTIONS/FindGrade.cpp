#include <iostream>
using namespace std;
char FindGrade(int num)
{
    if (num >= 90)
        return 'A';
    if (num >= 80)
        return 'B';
    if (num >= 70)
        return 'C';
    if (num >= 60)
        return 'D';
    else
    {
        return 'F';
    }
}
int main()
{

    int marks;
    cout << "Enter yoyur marks"<<endl;
    cin >> marks;

    char GradeOfStudent = FindGrade(marks);
    cout<<GradeOfStudent;
    return 0;
}