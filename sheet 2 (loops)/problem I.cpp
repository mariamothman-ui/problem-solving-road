#include <iostream>
using namespace std ;
int main()
{
    string x ;
    cin >> x ;
    string y = "";
    // reverse the number 
    for (int i = x.length()-1 ; i >= 0 ; i--){
        y+= x[i];
    }
    // convert it to nom to neglect leading zeros 
    int num = stoi(y);
    cout << num << endl ;
    bool p = true ;
    for (int i = 0 ; i < x.length() ; i++){
        if (x[i]!= y[i]){
            p = false ;
            break ;
        }
    }
    if (p == true){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
}
