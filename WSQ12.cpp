#include <iostream>
#include <iomanip>
using namespace std;

float factorial(int n)
{
  float fact;
  if (n == 0)
  {
    return 1;
  }
  else

  return n*factorial(n-1);
}

float calculating_e (float precision)
{
  float e = 1, x;
  for (int i = 1; i <= precision; i++)
  {
    e = e + 1/factorial (i);
  }
  cout << fixed << setprecision (precision);
  return e;

}

int main ()
{
  float precision;
  cout << "How many decimal numbers do you want for e?" << endl;
  cin >> precision;

  cout << "The estimated value of e with " << precision << " decimal numbers is:" << endl;
  cout <<  calculating_e(precision) << endl;

  return 0;

}
