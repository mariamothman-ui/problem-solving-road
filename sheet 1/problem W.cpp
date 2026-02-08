#include <iostream>
using namespace std ;
int main()
{
  int x , y , z ;
  char a , b ;
  cin >> x >> a >> y >> b >> z;
  switch (a){
      case '+':
      if (x + y == z){
          cout << "Yes";
      }
      else {
          cout <<x+y;
      }
      break ;
      case '-':
      if (x-y == z){
          cout <<"Yes";
      }
      else {
          cout << x-y ;
      }
      break; 
      case '*':
      if (x*y== z){
          cout << "Yes";
      }
      else {
          cout << x*y;
      }
  }
}
