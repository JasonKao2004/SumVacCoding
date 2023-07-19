#include <iostream>
using namespace std;

int main(){
    int n , k ;
    bool point = true ;
    cin >> n >> k ;
    for( int a = 0 ; a < n ; a ++ ){
        
        for( int b = 0 ; b < k ; b ++ ){
            
            for ( int c = 0 ; c < n ; c++ ){
               
                for ( int d = 0 ; d < k ; d++){
        
                if( a % 2 == c % 2)cout << "*" ;
                else cout << " " ; 
                }
        
            /*
            if (point) point = false ;
            else point = true ; 
            */
            }
        
        cout << endl ;        
        }
    /*
    if (a % 2) point = false ;
    else point = true ;
    */
    }
}