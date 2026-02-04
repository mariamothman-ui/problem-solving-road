#include<iostream>
using namespace std ;
int main (){
    // to avoid overflow
    long long x , y ;
    cin >> x >> y ;
    // x % 10 get the last digit of anumber
    cout << x % 10 + y % 10 ;
}
