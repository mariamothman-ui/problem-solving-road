#include <iostream>
using namespace std ;
int main()
{
   int x , y ;
   char z ;
   cin >> x >> z >> y ;
   switch(z){
       case '+':
       cout << x+y ;
       break ;
       case '-':
       cout << x-y ;
       break ;
       case '*':
       cout << x*y ;
       break ;
       default :
       cout << x/y ;
   }

}
