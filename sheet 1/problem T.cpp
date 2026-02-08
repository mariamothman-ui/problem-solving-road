#include <iostream>
using namespace std ;
int main()
{
   int x , y , z ;
   cin >> x >> y >> z ;
   if (x <= y && y <= z){
       cout << x <<"\n"<< y << "\n"<< z << endl ;
   }
   else if (x <= z && z <= y){
       cout << x << "\n"<< z << "\n"<< y << endl ;
   }
   else if (y <= x && x <=z){
       cout << y << "\n"<< x << "\n"<< z << endl ;
   }
   else if (y <= z && z <= x){
       cout << y << "\n"<< z << "\n"<< x << endl;
   }
   else if (z <= x && x <= y){
       cout << z << "\n" << x << "\n" << y << endl ;
   }
   else if (z <= y && y <=x){
       cout << z << "\n"<< y << "\n"<< x << endl;
   }
   cout <<endl  ;
   cout << x << "\n"<< y << "\n"<< z ;
}
// possoble cases is 
/*
x y z
x z y 
y x z
y z x 
z x y
z y x 
*/
