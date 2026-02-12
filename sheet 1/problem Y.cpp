#include <iostream>
using namespace std ;
int main()
{
  long long a , b,c,d ;
  cin >> a >> b >> c >> d ;
  // (a*b*c*d)%100 = (a%100 * b%100 * c%100 * d%100)%100 
  a %= 100 ;
  b %= 100 ;
  c %= 100 ;
  d %= 100 ;
  int mult = (a*b*c*d)%100 ;
  if (mult <= 9){
      cout << 0 << mult ;
  }
  else {
      cout << mult ;
  }
}
