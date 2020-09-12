//Program to create a linked list of names and shift them to the left based on user input

#include <iostream>
using namespace std;

class Node
{
public:
  char *data;
  Node *next = NULL;
};

class LL
{
public:
  Node *head = NULL;
  Node *curr = NULL;

  void insert(char *name)
  {
    Node *newnode = new Node;
    newnode->data = name;
    newnode->next = NULL;
    if (head == NULL)
    {
      head = newnode;
      curr = head;
    }
    else
    {
      curr->next = newnode;
      curr = curr->next;
    }
  }

  void disp()
  {
    curr = head;
    if (curr == NULL)
    {
      return;
    }
    while (curr->next != NULL)
    {
      cout << curr->data << " -> ";
      curr = curr->next;
    }
    cout << curr->data;
  }

  void shifter(int shift)
  {
    curr->next = head;
    curr = head;
    for (int i = 0; i < shift - 1; i++)
    {
      curr = curr->next;
    }
    head = curr->next;
    curr->next = NULL;
  }
};

int main()
{
  char *name;
  int shift, num;
  cout << "Enter number of students: " << endl;
  cin >> num;
  LL A;
  for (int i = 0; i < num; i++)
  {
    name = new char[20];
    cin >> name;
    A.insert(name);
  }
  cout << " Print data: " << endl;
  A.disp();
  cout << "\nEnter number by which left shift needed: " << endl;
  cin >> shift;
  shift = shift % num;
  A.shifter(shift);
  A.disp();
}

/* OUTPUT: 

Enter number of students:
4
Sheldon
Amy
Penny
Leonard
 Print data:
Sheldon -> Amy -> Penny -> Leonard
Enter number by which left shift needed:
2
Penny -> Leonard -> Sheldon -> Amy

*/