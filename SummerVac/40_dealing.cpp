#include <iostream>
#include <vector>
using namespace std ;

int main(){
    int howmany = 0 , gate = 0 , profit = 0 , sel = 0 ;
    cin >> howmany >> gate ;
    vector <int> prise ( howmany ) ;
    for ( int i = 0 ; i < howmany ; i++ ){
        cin >> prise [ i ] ;
    }
    int buy = prise [ 0 ] ;

    for ( int j = 1 ; j < howmany ; j++ ){
        if ( sel == 0 /* have stock need to sell */&& buy + gate <= prise [ j ] ){
            sel = prise [ j ] ;
            profit += sel - buy ;
            buy = 0 ;
        }
        if ( buy == 0 /* no stock need to buy */ && sel - gate >= prise [ j ] ){
            buy = prise [ j ] ;
            sel = 0 ;
        }
    }
    cout << profit << endl ;
}
/*
    30 20 45 38 10 20
buy 30 30  0
sel  0  0 45
*/