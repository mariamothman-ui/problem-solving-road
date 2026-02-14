#include <iostream>
// in climits library the biggest number is INT_MAX ,the smallest number is is INT_MIN 
#include <climits>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int max = INT_MIN;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (x > max ){
            max = x ;
        }
    }
    cout << max ;
}
