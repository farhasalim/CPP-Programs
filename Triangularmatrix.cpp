#FARHA SALIM KUMAR

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter size of square matrix: ";
  cin >> n;
  int *arr = NULL; // pointer to an int, intiallly to nothing.
  arr = new int[n * n];
  cout << "\nEnter elements to matrix: " << endl;
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << "Enter element: ";
      cin >> *(arr + i * n + j);
    }
  }
  cout << "The matrix: " << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << *(arr + i * n + j) << "\t";
    }
    cout << "\n";
  }

  cout << "The upper triangular matrix: " << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (j < i)
      {
        cout << 0 << "\t";
      }
      else
      {
        cout << *(arr + i * n + j) << "\t";
      }
    }
    cout << "\n";
  }

  cout << "The lower triangular matrix: " << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (j > i)
      {
        cout << 0 << "\t";
      }
      else
      {
        cout << *(arr + i * n + j) << "\t";
      }
    }
    cout << "\n";
  }

  delete[] arr;
}
