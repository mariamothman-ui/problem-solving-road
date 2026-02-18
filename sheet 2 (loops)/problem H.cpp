#include <iostream>
using namespace std ;
int main()
{
    int x ;
    cin >> x ;
    bool p = true ;
    for (int i = 2 ; i < x ; i++){
        if (x%i == 0){
            p= false ;
        }
    }
    if (p== true){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
