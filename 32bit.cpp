//PROGRAM TO GET BIT REPRESENTATION of a 32 bit number

#include <iostream>
using namespace std;

int binconv(unsigned long long n)
{
  int ctr = 0;
  unsigned long i = 1ULL;
  for (i = 1ULL << 31; i > 0; i = i / 2)
    if (n & i)
    {
      cout << "1";
      ctr++;
    }
    else
    {
      cout << "0";
    }
  return ctr;
}

int main(void)
{
  unsigned long num;
  cout << "Enter number to check bit representation: " << endl;
  cin >> num;
  int r = binconv(num);
  cout << "\nCount of 1s is " << r << endl;
}

/* OUTPUT:

Enter number to check bit representation:
1200
00000000000000000000010010110000
Count of 1s is 4

*/