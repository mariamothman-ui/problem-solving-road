#include<iostream>
using namespace std ;
int main (){
    // to avoid the over flow
    long long x ;
    cin >> x;
    // we use this function instead of using loops to avoid time limit 
    cout << x*(x+1)/2 ;
}
