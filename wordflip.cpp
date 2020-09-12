//PROGRAM TO FLIP WORDS IN A LINE IN A FILE AND WRITE TO ANOTHER FILE

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char word[100][20];
  char lin[200];

  FILE *fr = fopen("a.txt", "r");
  FILE *fa = fopen("b.txt", "w");

  while (fgets(lin, 200, fr))
  {

    int i = 0, j = 0, ctr = 0;

    for (i = 0; i < (strlen(lin)); i++)
    {

      if (lin[i] == ' ' || lin[i] == '\n')
      {
        word[ctr][j] = '\0';
        ctr++;
        j = 0;
      }

      else
      {
        word[ctr][j] = lin[i];
        j++;
      }
    }

    for (i = ctr - 1; i >= 0; i--)
    {
      if (i == 0)
      {
        fputs(word[i], fa);
      }

      else
      {
        fputs(word[i], fa);
        fputs(" ", fa);
      }
    }

    fputs("\n", fa);
  }

  fclose(fr);
  fclose(fa);

  return 0;
}

/*OUTPUT

FILE a: 
Hello I am XYZ
The world works in funny ways
Arent we all upside down

FILE b:
XYZ am I Hello
ways funny in works world The
upside all we Arent
*/