//PROGRAM TO GET BIT REPRESENTATION of a 64 bit number.
//also returns 1 if number of 1s in the bit representation is odd, else returns 0.


#include <iostream>
using namespace std;

int binconv(unsigned long long n)
{
  int ctr = 0;
  unsigned long long i = 1ULL;
  for (i = 1ULL << 63; i > 0; i = i / 2)
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

bool oddoreven(int r)
{
  if (r % 2 != 0)
    return true;
  else
    return false;
}

int main(void)
{
  //int r = binconv(18446744073709551615ULL); this is the biggest number we can give
  unsigned long long num;
  cout << "Enter number to check bit representation: " << endl;
  cin >> num;
  int r = binconv(num);
  bool k = oddoreven(r);
  cout << "\n"
       << k;
}


/* OUTPUT: 

Enter number to check bit representation:
18446744073709551615
1111111111111111111111111111111111111111111111111111111111111111
0
*/