#include <iostream>
// we use this library to specify the number of digits after .
#include<iomanip>
using namespace std ;
int main()
{
  double x ;
  cin >> x ;
  //this is the form of printing using iomanip library 
  cout << fixed << setprecision(9) << 3.141592653*x*x ;
}
