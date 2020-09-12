//Program to convert into lowercase and uppercase letters

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

char *upper(char *str)
{
  int siz = strlen(str);
  for (int i = 0; i < siz; i++)
  {
    int c = str[i];
    if (islower(c))
    {
      str[i] = toupper(c);
    }
  }
  return str;
}

char *lower(char *str)
{
  int siz = strlen(str);
  for (int i = 0; i < siz; i++)
  {
    int c = str[i];
    if (isupper(c))
    {
      str[i] = tolower(c);
    }
  }
  return str;
}

int main()
{
  char s[100];
  char *g, *r;
  cout << "Enter String to make uppercase: " << endl;
  cin >> s;
  g = upper(s);
  cout << g;
  cout << "\nEnter String to make lowercase: " << endl;
  cin >> s;
  r = lower(s);
  cout << r;
  return 0;
}

/* OUTPUT: 

Enter String to make uppercase:
school
SCHOOL
Enter String to make lowercase:
COLLege
college

*/