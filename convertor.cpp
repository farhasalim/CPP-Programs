//Program to convert string to number till a letter is encountered.

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int convertor(char *str)
{
  int size = strlen(str);
  int a = atoi(str); //atoi converts string to number till a letter is encountered.
  return a;
}

int main()
{
  char s[100];
  cout << "Enter string: " << endl;
  cin >> s;
  int k = convertor(s);
  cout << k << endl;
  return 0;
}

/* OUTPUT:

Enter string:
123hello321
123

*/