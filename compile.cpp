// #define example program

#include <iostream>
using namespace std;
#define ABC cout << "abcdefg"
int main()

{
  ABC;
  /* This is a comment */
  typedef int i;
  i a;
  a = 2;
  cout << a;
  return 0;
}

/* OUTPUT

abcdefg2 */
