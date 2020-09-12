//Program using classes to input subjects, student names, marks, and to get final ranklist in sorted order.

#include <iostream>
#include <cstring>
using namespace std;

class subs
{
public:
  char *subname;
  float mark;
  subs(char *val, int m)
  {
    subname = val;
    mark = m;
  }
};

class stud
{
public:
  char *name;
  int sub;
  subs *pt[10];
  float total;
  int rank;
  stud(char *names, int subnum, char *snames[])
  {
    name = names;
    sub = subnum;
    int p = 0;
    total = 0;
    for (p = 0; p < subnum; p++)
    {
      int mark;
      cout << "Enter mark : ";
      cin >> mark;
      pt[p] = new subs(snames[p], mark);
      total = total + mark;
    }
  }

  void print()
  {
    cout << name << " " << rank << "   " << total << endl;
  }
};

int main()
{
  int n = 0, m = 0;
  cout << "Enter number of students: ";
  cin >> n;
  stud *kids[10];
  cout << "Enter number of subjects: ";
  cin >> m;
  char *sname[10];
  char *name;
  for (int i = 0; i < m; i++)
  {
    cout << "Enter name of subject " << i + 1 << " : ";
    sname[i] = new char[20];
    cin >> (sname[i]);
  }
  for (int i = 0; i < n; i++)
  {
    cout << "Enter name of student: ";
    name = new char[20];
    cin >> name;
    kids[i] = new stud(name, m, sname);
  }

  stud *temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (kids[i]->total < kids[j]->total)
      {
        temp = kids[i];
        kids[i] = kids[j];
        kids[j] = temp;
      }
      kids[i]->rank = i + 1;
      kids[j]->rank = j + 1;
    }
  }
  cout << endl
       << "name "
       << "\trank "
       << "\ttotal" << endl;
  for (int i = 0; i < n; i++)
    kids[i]->print();
}

/* OUTPUT:

Enter number of students: 3
Enter number of subjects: 3
Enter name of subject 1 : ABC
Enter name of subject 2 : DEF
Enter name of subject 3 : GHI
Enter name of student: Helen
Enter mark : 99
Enter mark : 99
Enter mark : 100
Enter name of student: Greta
Enter mark : 43
Enter mark : 34
Enter mark : 40
Enter name of student: Terry
Enter mark : 90
Enter mark : 80
Enter mark : 70

name    rank    total
Helen 1   298
Terry 2   240
Greta 3   117

*/