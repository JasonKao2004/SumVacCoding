#include <iostream>
using namespace std;

int main(){
    int y1 = 0 , y2 = 0 , a1 = 0 , a2 = 0 , b1 = 0 , b2 = 0 , c1 = 0 , c2 = 0 , x1 = 0 , x2 = 0 , n = 0 , max = -500 ;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n  ;
    for ( int i = 0 ; i <= n ; i++ ){
        y1 = a1 * i * i + b1 * i + c1 ;
        y2 = a2 * ( n - i ) * ( n - i ) + b2 * ( n - i ) + c2 ;

        if ( ( y1 + y2 ) > max ) max = ( y1 + y2 ) ;
        
    }
    cout << max ;
}