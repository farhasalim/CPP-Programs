//PROGRAM TO COPY NUMBERS FROM ONE FILE TO ANOTHER AND LETTERS TO ANOTHER

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
  FILE *fPointer = fopen("abcc.txt", "r");
  FILE *fn = fopen("anum.txt", "w");
  FILE *fl = fopen("alet.txt", "w");
  char p;
  char str[255];
  do
  {
    p = fgetc(fPointer);
    if (isdigit(p))
    {
      putc(p, fn);
    }
    else if (isalpha(p))
    {
      putc(p, fl);
    }
    else
    {
    }
  } while (p != EOF);
  fclose(fPointer);
  fclose(fn);
  fclose(fl);
  return 0;
}

/*OUTPUT:

FILE abcc:

hello my name is xyz.
im awesome right, but I need 12 oranges
Have you ever seen 23 monkeys? 
12 buckle my shoe 34 shut the door 5 6 pick up sticks

FILE alet:

hellomynameisxyzimawesomerightbutIneedorangesHaveyoueverseenmonkeysbucklemyshoeshutthedoorpickupsticks

FILE anum:

1223123456*/