// Program to implement matrix multiplication

#include <iostream>
using namespace std;
int main()
{
  int m, n, a, b, i, j, k;
  cout << "Enter matrix A dimensions: " << endl;
  cin >> m;
  cin >> n;
  cout << "Enter matrix B dimensions: " << endl;
  cin >> a;
  cin >> b;
  int *arr = NULL;
  arr = new int[m * n];
  int *arra = NULL;
  arra = new int[a * b];

  if (n != a)
  {
    cout << "Matrix multiplication not possible.";
    return 0;
  }
  else
  {

    cout << "\nEnter elements to matrix A: " << endl;
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
      {
        cout << "Enter element: ";
        cin >> *(arr + i * n + j);
      }
    }

    cout << "\nEnter elements to matrix B: " << endl;
    for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
      {
        cout << "Enter element: ";
        cin >> *(arra + i * b + j);
      }
    }
  }
  // Initializing elements of matrix mult to 0.
  int *mult = NULL;
  mult = new int[m * b];
  for (i = 0; i < m; ++i)
    for (j = 0; j < b; ++j)
    {
      *(mult + i * b + j) = 0;
    }

  // Multiplying matrix a and b and storing in array mult.
  for (i = 0; i < m; ++i)
    for (j = 0; j < b; ++j)
      for (k = 0; k < n; ++k)
      {
        *(mult + i * b + j) += *(arr + i * n + k) * *(arra + k * n + j);
      }
  // Displaying the multiplication of two matrix.
  cout << endl
       << "Output Matrix: " << endl;
  for (i = 0; i < m; ++i)
  {
    for (j = 0; j < b; ++j)
    {
      cout << " " << *(mult + i * b + j);
      if (j == b - 1)
        cout << endl;
    }
  }

  return 0;
}

/* OUTPUT

Enter matrix A dimensions:
4
1
Enter matrix B dimensions:
1
4

Enter elements to matrix A:
Enter element: 1
Enter element: 2
Enter element: 3
Enter element: 1

Enter elements to matrix B:
Enter element: 2
Enter element: 3
Enter element: 1
Enter element: 1

Output Matrix:
 2 3 1 1
 4 6 2 2
 6 9 3 3
 2 3 1 1

 */