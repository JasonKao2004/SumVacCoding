#include <iostream>
using namespace std;

int main(){
    int round = 0 , ind = 0 /*indicator*/ , step = 0 ;
    cin >> step ;
    if ( step == 1 ) cout << "Pen" << endl ;
    while ( step != 0 ){

        for ( int pen = 0 ; pen <= round ; pen ++ , step -- ) {  /* Pen */
            if ( step == 0 ){
                ind = 1 ;
                cout << "Pen" << endl ;
                break ;
            }
        }
        if ( step == 0 ) break;

        for( int papple = 0 ; papple <= round ; papple ++ , step --){  /* Pineapple */
            if ( step == 0 ){
                ind = 2 ;
                cout << "Pineapple" << endl ;
                break ;
            }
        }

        if ( step == 0 ) break;

        for( int apple = 0 ; apple <= round ; apple ++ , step --){  /* Apple */
            if ( step == 0 ){
                ind = 3 ;
                cout << "Apple" << endl ;
                break ;
            }
        }

        if ( step == 0 ) break;
        
        for( int pineapple = 0 ; pineapple <= round ; pineapple ++ , step --){  /*Pineapplepen*/
            if ( step == 0 ){
                ind = 4 ;
                cout << "Pineapple pen" << endl ;
                break ;
            }
        }

        if ( step == 0 ) break;

        round ++ ;
    }
    
}