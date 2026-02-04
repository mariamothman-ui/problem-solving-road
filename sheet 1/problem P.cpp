#include <iostream>
using namespace std ;
int main()
{
   int x ;
   cin >> x ;
   // to get the first digit of anumber consists of 4 digit we divide it by 1000
   if ((x/1000)%2 == 0){
       cout << "EVEN";
   }
   else {
       cout << "ODD";
   }
}
