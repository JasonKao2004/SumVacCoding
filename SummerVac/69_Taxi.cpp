#include <iostream>
using namespace std;

int main(){ 
    int ttmon = 0 , dis = 0 , wastt = 0 , startt = 0 , endt = 0 ;
    cin >> dis >> wastt >> startt >> endt ;
    
    ttmon += 20 ; /* distance */
    if ( dis >= 2 ){
        ttmon +=  ( dis - 2 ) * 5 ;
    }

    ttmon +=  ( wastt / 2 ) * 5 ;

    for ( int i = 18 ; i < 23 ; i ++ ){
        int cost = 185 + 10 * ( i - 18 );
        if ( startt <= i && i + 1 <= endt ){
        ttmon += cost ;
        }
    }
    
    cout << ttmon << endl ;
}