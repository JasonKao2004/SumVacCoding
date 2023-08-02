#include <iostream>
#include <vector>
using namespace std;

int main(){
    int line = 0 , l = 0 ;
    
    cin >> line ;
    l = line * 2 + 1 ;
    vector < vector <int> > word ( l , vector <bool> (8) ) ;
    for ( int i = 1 ; i < l * 2 + 1 ; i++ ){
        for ( int j = 1 ; j < 7 ; j ++ ){
            cin >> word [ i ] [ j ] ;
        }
    }
    for ( int i = 1 ; i <= l ; i += 2){
    bool a = 0 , b = 0 , c = 0 ;
        /*
        A 1[ 2 != 4] && 2 == 6
        B [1] [7] == 1 && [2] [7] == 0
        C [1!=2] [2] [4] [6]
        */
        if ( word [ i ] [ 2 ] != word [ i ] [ 4 ] && word [ i ] [ 2 ] == word [ i ] [ 6 ] ) a = 1 ;
        else cout << "A" ;
         if ( word [ i ] [ 7 ] == 1 && word [ i + 1 ] [ 7 ] == 0 ) b = 1 ;
        else cout << "B" ;
        if ( word [ i ] [ 2 ] != word [ i + 1 ] [ 2 ] && word [ i ] [ 4 ] != word [ i + 1 ] [ 4 ] && word [ i ] [ 6 ] != word [ i + 1 ] [ 6 ]) c = 1 ;
        else cout << "C" ;
        if ( a || b || c ) cout << "none" ;
        cout << endl ;
    }
}
