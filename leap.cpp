//Program to check if leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 4 == 0)
    {
        if (a % 400 == 0)
        {
            cout << a << " is a leap year.";
        }
        else if (a % 100 == 0)
        {
            cout << a << " is not a leap year.";
        }
        else
        {
            cout << a << " is a leap year.";
        }
    }
    else
    {
        cout << a << " is not a leap year.";
    }
    return 0;
}

/* OUTPUT:

1997
1997 is not a leap year. 
*/
