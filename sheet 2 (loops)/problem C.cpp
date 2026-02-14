#include <iostream>
using namespace std ;
int main()
{
    int n ; 
    cin >> n ;
    int even = 0 , odd = 0 ,pos = 0 ,nev = 0 ;
    for(int i = 1 ; i <= n ; i++){
        int x ;
        cin >> x ;
        // we use if whith out else if to make every number be checked 
        if (x % 2 == 0){
           even++;
        }
        if (x % 2 != 0){
            odd++ ;
        }
        if (x > 0){
        pos++ ;
        }
        if (x < 0){
            nev++ ;
        }
    }
    cout << "Even: "<< even << endl ;
    cout << "Odd: "<< odd << endl ;
    cout << "Positive: "<< pos << endl ;
    cout << "Negative: "<< nev ;
}
