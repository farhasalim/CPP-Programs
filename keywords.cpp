//Program to check if entered word is a c++ keyword

#include <iostream>
#include <cstring>
using namespace std;
int main()
{

  string keys[62] = {"auto",
                     "double",
                     "int",
                     "struct",
                     "break",
                     "else",
                     "long",
                     "switch",
                     "case",
                     "enum",
                     "register",
                     "typedef",
                     "char",
                     "extern",
                     "return",
                     "union",
                     "const",
                     "float",
                     "short",
                     "unsigned",
                     "continue",
                     "for",
                     "signed",
                     "void",
                     "default",
                     "goto",
                     "sizeof",
                     "volatile",
                     "do",
                     "if",
                     "static",
                     "while",
                     "asm",
                     "dynamic_cast",
                     "namespace",
                     "reinterpret_cast",
                     "bool",
                     "explicit",
                     "new",
                     "static_cast",
                     "catch",
                     "false",
                     "operator",
                     "template",
                     "class",
                     "friend",
                     "private",
                     "this",
                     "const_cast",
                     "inline",
                     "public",
                     "throw",
                     "delete",
                     "mutable",
                     "protected",
                     "true",
                     "try",
                     "typeid",
                     "typename",
                     "using",
                     "virtual",
                     "wchar_t"};

  string enters;
  int flag = 0;
  cout << "Enter input string: ";
  getline(cin, enters);
  for (int i = 0; i < 62; i++)
  {
    if (keys[i] == enters)
    {
      cout << enters << " is a keyword." << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << enters << " is not a keyword." << endl;
  }
  return 0;
}

/* OUTPUT:

Enter input string: hello
hello is not a keyword.

Enter input string: while
while is a keyword.
*/
