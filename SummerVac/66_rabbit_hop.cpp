#include <iostream>
using namespace std;

int main(){
    int jump1 = 0 , jump2 = 0 , end = 0 , mult1 = 0 , mult2 = 0 ;
    bool suc = false ;
    cin >> jump1 >> jump2 >> end ;
    mult1 = end / jump1 , mult2 = end / jump2 ;

    for ( int i = 0 ; i <= mult1 ; i++ ){
        
        for ( int j = 0 ; j <= mult2 ; j++ ){
            if( i * jump1 + j * jump2 == end ){
                suc = true ;
            }
        }
    }

    if ( suc )cout << "YES" << endl ;
    else cout << "NO" <<endl ;
}