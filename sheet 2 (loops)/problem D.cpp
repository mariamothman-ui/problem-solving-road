#include <iostream>
using namespace std ;
int main()
{
    for ( ; ; ){
        int x ; 
        cin >> x ; 
        if (x != 1999){
           cout << "Wrong" << endl ; 
        }
        else {
            cout << "Correct";
            break ;
        }
    }
}
