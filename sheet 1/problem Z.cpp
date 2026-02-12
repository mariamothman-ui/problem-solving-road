#include <iostream>
#include<cmath>
using namespace std ;
int main()
{
  long long a , b , c , d ;
  cin >> a >> b >> c >> d ;
  //a^b = b*log(a)
  if (b*log(a) > d*log(c)){
      cout <<"YES";
  }
  else {
      cout << "NO";
  }
  
}
