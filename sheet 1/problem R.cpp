#include <iostream>
using namespace std ;
int main()
{
    int n ; 
    cin >> n ;
    // one year has 365 days 
    int years = n / 365 ;
    // one month has 30 days 
    int months = (n % 365) / 30 ;
    int days = (n % 365 ) % 30 ;
    cout << years << " "<< "years"<< endl ;
    cout << months << " "<< "months"<< endl ;
    cout << days << " "<< "days" ;
    
    return 0;
}
