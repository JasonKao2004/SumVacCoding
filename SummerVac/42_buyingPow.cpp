#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0 , d = 0 , buy = 0 , cost = 0 ;
    cin >> n >> d ;
    vector < vector <int> > merch ( n , vector <int> (3) ) ;
    for ( int i = 0 ; i < n ; i++ ){
        int  arv = 0 , max = 0 , min = 100 ; 
        for ( int j = 0 ; j < 3 ; j++ ){
            cin >> merch [ i ] [ j ] ;
            if ( merch [ i ] [ j ] > max ) max = merch [ i ] [ j ] ;
            if (  merch [ i ] [ j ] < min ) min = merch [ i ] [ j ] ;
            arv += merch [ i ] [ j ] ;
        }
        arv /= 3 ;
        if ( max - min >= d ){
            buy ++ ;
            cost += arv ;
        }
        
    }
    cout << buy << " " << cost ;


}
