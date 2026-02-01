#include <iostream>
using namespace std ;
int main()
{
    // long long to avoid overflow 
    long long a ,b ,c , d ;
    cin >> a >> b >> c >> d ;
    cout << "Difference = "<< (a*b-c*d) ;
}
