#include <iostream>
using namespace std ;
int main()
{
   int x , y ;
   char z ;
   cin >> x >> z >> y ;
   switch (z) {
       case '>':
       if (x > y){
           cout << "Right";
       }
       else {
           cout << "Wrong";
       }
       break ;
       case '<':
       if (x < y){
           cout <<"Right";
       }
       else {
           cout << "Wrong";
       }
       break ;
       case '=':
       if (x == y){
           cout << "Right";
       }
       else {
           cout << "Wrong";
       }
   }
}
