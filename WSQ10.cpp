#include <iostream>
#include <cmath>
using namespace std;

float SquareRoot (double x){
  double Error = 0.0001;
  double y = x;
    while ( (y - x/y) > Error){
        y = (y + x/y)/2;
        cout << "An intermediate result is: " << y << endl;
      }
cout << "The final result is:" << endl;
return y;
}

int main (){
  double x;
  cout << "Please give me a number to calculate its square root with the Babylonian method:" << endl;
  cin >> x;
  cout << "With the Babylonian method we obtained: " << endl;
  cout << SquareRoot(x) << endl;
//If we calculate the square root with the sqrt function we can confirm the result.
  cout << "The square root made by the function is: " << sqrt(x) << endl;

return 0;
}
