// Program to create a dynamic array and delete it

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int siz;
  cout << "Enter array size: " << endl;
  cin >> siz;
  int *ptr = (int *)malloc(siz * sizeof(int));
  for (int i = 0; i < siz; i++)
  {
    cout << "Enter array element: " << endl;
    cin >> ptr[i];
  }
  for (int i = 0; i < siz; i++)
  {
    cout << ptr[i] << " " << endl;
  }
  free(ptr);
  return 0;
}

/* OUTPUT:

Enter array size:
3
Enter array element:
5
Enter array element:
7
Enter array element:
9

5
7
9
*/