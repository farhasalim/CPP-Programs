//program to implement a doubly linked list

#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};

struct node *head;
struct node *tail;

void starter()
{
  head = NULL;
  tail = NULL;
}

void insertfront(int data)
{
  struct node *newnode;
  newnode = new node; //Why?
  newnode->data = data;
  if (head == NULL)
  {
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;
    tail = newnode;
  }
  else
  {
    newnode->prev = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
  }
}

void insertend(int data)
{
  struct node *newnode;
  newnode = new node;
  newnode->data = data;
  if (head == NULL)
  {
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;
    tail = newnode;
  }
  else
  {
    newnode->next = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
  }
}

void insertafter(int listval, int data)
{
  struct node *newnode;
  newnode = new node;
  struct node *current;
  current = head;
  newnode->data = data;
  if (head == NULL)
  {
    cout << "Cannot perform operation." << endl;
    return;
  }
  else if (head == tail)
  {
    if (head->data != listval)
    {
      cout << "Cannot perform operation." << endl;
      return;
    }
    else
    {
      newnode->next = NULL;
      newnode->prev = head;
      head->next = newnode;
      tail = newnode;
      return;
    }
  }
  else
  {
    if (tail->data == listval)
    {
      insertend(data);
      return;
    }
    while (current->data != listval)
    {
      current = current->next;
      if (current == NULL)
      {
        cout << "Cannot perform operation since element not found." << endl;
        return;
      }
    }
    newnode->prev = current;
    newnode->next = current->next;
    current->next->prev = newnode;
    current->next = newnode;
    return;
  }
}

void delfront()
{
  if (head == NULL)
  {
    cout << "Cannot perform operation on an empty list." << endl;
    return;
  }
  else if (head == tail)
  {
    head = NULL;
    tail = NULL;
    return;
  }
  else
  {
    struct node *current;
    current = head;
    head = head->next;
    head->prev = NULL;
    delete current;
    return;
  }
}

void dellast()
{
  if (head == NULL)
    return;
  if (head == tail)
  {
    struct node *cur;
    cur = head;
    head = NULL;
    tail = NULL;
    delete cur;
    return;
  }
  else
  {
    struct node *cur;
    cur = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete cur;
  }
}

void deletedata(int data)
{
  struct node *current;
  current = head;
  if (head == NULL)
  {
    cout << "Cannot perform operation since list is empty." << endl;
    return;
  }
  else if (head == tail)
  {
    if (head->data != data)
    {
      cout << "Invalid operation." << endl;
      return;
    }
    head = NULL;
    tail = NULL;
    delete current;
    return;
  }
  else
  {
    if (head->data == data)
    {
      head = head->next;
      head->prev = NULL;
      delete current;
      return;
    }
    else if (tail->data == data)
    {
      current = tail;
      tail = tail->prev;
      tail->next = NULL;
      delete current;
      return;
    }
    else
    {
      while (current->data != data)
      {
        current = current->next;
        if (current == NULL)
        {
          cout << "Element not found." << endl;
          return;
        }
      }
      current->next->prev = current->prev;
      current->prev->next = current->next;
      delete current;
      return;
    }
  }
}

void display()
{
  struct node *current;
  current = head;
  cout << "List: ";
  while (current != NULL)
  {
    cout << current->data << "->";
    current = current->next;
  }
}

int main()
{
  starter();

  int choice;
  while (1)
  {
    cout << ("1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit\n");
    cin >> choice;
    if (choice == 1)
    {
      int element;
      cout << "Enter element:";
      cin >> element;
      insertfront(element);
      display();
    }
    else if (choice == 2)
    {
      int element;
      cout << "Enter element:";
      cin >> element;
      insertend(element);
      display();
    }
    else if (choice == 3)
    {
      int old, newitem;
      cout << "Enter List value: ";
      cin >> old;
      cout << "Enter new value: ";
      cin >> newitem;
      insertafter(old, newitem);
      display();
    }
    else if (choice == 4)
    {
      delfront();
      display();
    }
    else if (choice == 5)
    {
      dellast();
      display();
    }
    else if (choice == 6)
    {
      int element;
      cin >> element;
      deletedata(element);
      display();
    }
    else if (choice == 7)
    {
      display();
    }
    else if (choice == 8)
    {
      break;
    }
    else
    {
      cout << "Wrong choice entered.";
      break;
    }
  }
  return 0;
}

/* OUTPUT: 

1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
1
Enter element:10
List: 10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
1
Enter element:20
List: 20->10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
1
Enter element:30
List: 30->20->10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
2
Enter element:40
List: 30->20->10->40->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
3
Enter List value: 20
Enter new value: 25
List: 30->20->25->10->40->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
4
List: 20->25->10->40->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
5
List: 20->25->10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
6
25
List: 20->10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
7
List: 20->10->1.Insert Front 2.Insert End 3.Insert After 4.Delete Front 5.Delete Last 6.Delete item 7.Print List 8.Exit
8
*/