#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> t ( 50 ) ;

int main(){
    int n , d = 1 ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> t [ i ];        
    }
    int f = max(t [0] , t[2] ) ;
    for( int j = 1 ; j < n - 2 ; j ++ ){
        if ( max ( t [ j ] , t [ j + 2 ] ) < f ) d = j + 1 , f = max ( t [ j ] , t [ j + 2 ] );
        //cout << "debug max "<< j << " " << max ( t [ j ] , t [ j + 2 ] ) << endl;
    }
    cout << d << " " << f << endl;
}