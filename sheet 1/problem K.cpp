#include<iostream>
using namespace std ;
int main (){
    int x , y , z;
    cin >> x >> y >> z ;
    int min , max ;
    if (x >= y && x >= z ){
     max = x ;   
    }
    else if (y >= x && y >= z){
      max = y ;  
    }
    else {
        max = z ;
    }
    
    if (x <= y && x <= z ){
     min = x ;   
    }
    else if (y <= x && y <= z){
      min = y ;  
    }
    else {
        min = z ;
    }
    cout << min << ' '<< max ;
}
    
