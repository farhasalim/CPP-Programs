#include <iostream>
using namespace std;
int main()
{
  int a = 1;
  while (a != 0)
  {
    cout << "Enter option:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit program.\n";
    int c;
    cin >> c;
    cout << "Enter numbers: " << endl;
    int num1;
    int num2;
    cin >> num1 >> num2;
    int res;
    switch (c)
    {
    case 1:

      res = num1 + num2;
      cout << "Result: " << res;
      break;

    case 2:

      res = num1 - num2;
      cout << "Result: " << res;
      break;

    case 3:

      res = num1 * num2;
      cout << "Result: " << res;
      break;

    case 4:

      res = num1 / num2;
      cout << "Result: " << res;
      break;

    case 0:
      a = 0;
      break;

    default:
      cout << "Invalid input.";
      break;
    }
  }
}