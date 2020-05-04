#include <iostream>

using namespace std;

//prototype for factorial()
int factorial (int);

int main() 
{
  int n = 0;
  cout << "Enter number you wish to generate the factorial for: ";
  cin >> n;

  cout << "\nThe factorial for " << n << " is " << factorial(n);

  return 0;
}

int factorial (int num)
{
  if (num > 0)
    return num * factorial(num-1);
  else
    return 1;
}