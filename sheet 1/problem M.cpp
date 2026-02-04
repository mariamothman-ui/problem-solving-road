#include<iostream>
using namespace std ;
int main (){
    char x ;
    cin >> x ;
    //to get the ascii of achar we use (int)char
    //ascii of digits is from 48 to 57
    if ((int)x >= 48 && (int)x <= 57){
        cout <<"IS DIGIT" ;
    }
    //ascii of capital letters is from 65 to 90
    else if ((int)x>=65 && (int)x <=90){
        cout << "ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else {
        cout << "ALPHA"<<"\n"<<"IS SMALL";
    }
    
}
    
