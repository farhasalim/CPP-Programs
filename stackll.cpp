//Program to reverse the entered string, using linked list to implement stack functions.

#include <iostream>
#include <cstring>
using namespace std;

class Node
{
public:
  char data;
  Node *next;
};

class LL
{
public:
  Node *head = NULL;
  Node *curr = NULL;

  void push(char letter)
  {
    Node *newnode = new Node;
    newnode->data = letter;
    if (head == NULL)
    {
      head = newnode;
      newnode->next = NULL;
    }
    else
    {
      newnode->next = head;
      head = newnode;
    }
  }

  void pop()
  {
    curr = head;
    head = head->next;
    cout << curr->data;
    delete curr;
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
    cout << curr->data << endl;
  }
};

int main()
{
  cout << "Enter word: " << endl;
  char name[20];
  cin >> name;
  LL A;
  int k = strlen(name);
  for (int i = 0; i < k; i++)
  {
    A.push(name[i]);
  }
  A.disp();
  for (int i = 0; i < k; i++)
  {
    A.pop();
  }
  return 0;
}

/* OUTPUT:

Enter word:
wonderful
l -> u -> f -> r -> e -> d -> n -> o -> w
lufrednow

*/