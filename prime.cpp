//Program to check if a number is prime or not.

#include <iostream>
using namespace std;
int main()
{
  int a, i, flag;
  flag = 0;
  cout << "Enter the number:" << endl;
  cin >> a;
  if (a == 1 || a == 0)
  {
    flag = 1;
  }
  for (i = 2; i < (a / 2) + 1; i++)
  {
    if (a % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << a << " is a prime number.";
  }
  else
  {
    cout << a << " is not a prime number.";
  }
}

/* OUTPUT: 
Enter the number:
240
240 is not a prime number.
*/
