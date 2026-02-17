#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        int x ;
        cin >> x ;
        // long long to avoid over flow 
        long long  mult = 1 ;
        for (int j = 1 ; j <= x ; j++){
            mult*= j ;
        }
        cout << mult << endl ; 
    }
}
