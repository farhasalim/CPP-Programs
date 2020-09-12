// A program to calculate tax per year. Total amount to be taxed calculated from income and savings.

#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a = 1;
  int c;
  while (a != 0)
  {
    cout << "Enter option:\n1. Calculate income tax.\n0. Exit program.\n";
    cin >> c;
    switch (c)
    {
    case 1:
      cout << "Enter income per year:\t";
      int i;
      cin >> i;
      cout << "Enter savings:\n";
      int s;
      cin >> s;
      int t;
      if (i > 1500000)
      {
        t = 0.3 * i;
      }
      else if (i > 1000000)
      {
        t = 0.2 * i;
      }
      else if (i > 500000)
      {
        t = 0.1 * i;
      }
      else if (i > 250000)
      {
        t = 0.05 * i;
      }
      else
      {
        t = 0;
      }
      int tot;
      int sav;
      if (s > 1500000)
      {
        sav = 0.3 * i;
      }
      else if (s > 1000000)
      {
        sav = 0.2 * i;
      }
      else if (s > 500000)
      {
        sav = 0.1 * i;
      }
      else if (s > 250000)
      {
        sav = 0.05 * i;
      }
      else
      {
        sav = 0;
      }
      tot = t + sav;
      cout << "Tax amount: " << tot << endl;
      break;
    case 0:
      a = 0;
      break;
    default:
      cout << "Invalid input.\n";
      break;
    }
  }
}

/* OUTPUT: 
Enter option:
1. Calculate income tax.
0. Exit program.
1
Enter income per year:  400000
Enter savings:
20000
Tax amount: 20000
Enter option:
1. Calculate income tax.
0. Exit program.
0
*/
