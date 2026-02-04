#include<iostream>
using namespace std ;
int main (){
    char x ;
    cin >> x ;
    // ascii of small digits is from 97 to 122
    // difference between 'a' and 'A' in ASCII is 32
    if ((int)x >= 97 && (int)x<= 122){
        x-= 32 ;
    }
    else {
        x+= 32 ;
    }
    cout << (char)x;
}
    
