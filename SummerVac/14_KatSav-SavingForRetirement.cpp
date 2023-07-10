#include <iostream>
using namespace std;

int main ( ) {
int b , br , bs , a , as , ar = 0 , n = 0;
cin >> b >> br >> bs >> a >> as ;

// ar = ( bs * ( br - b ) ) / as + a ;
n = ( bs * ( br - b ) ) ;
   
    while ( n > 0 ){
    n = n - as ;
    ar ++;
    }


cout << ar + a <<endl ;
}