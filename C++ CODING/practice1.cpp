#include <iostream>
using namespace std;

int main()
{

    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "THIS IS A UPPERCASE" << endl;
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "THIS IS LOWERCASE" << endl;
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << "THIS IS A DIGIT" << endl;
    }
    return 0;
}
