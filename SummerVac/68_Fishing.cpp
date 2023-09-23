#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector < pair < int , int > > fish ( 5 ) ;

int main(){
    int howmany = 0 , best = 0 , shortest = 5000000 ;
    pair < int , int > fisherman;
    cin >> fisherman . first >> fisherman . second >> howmany ;
    
    fish.resize ( howmany ) ; 

    for ( int i = 0 ; i < howmany ; i ++ ){
        cin >> fish [ i ] . first >> fish [ i ] .  second ;
    }

    for ( int j = 0 ;  j < howmany ; j ++ ){
        int temp ;
        temp = ( fisherman . first - fish [ j ] .first ) * ( fisherman . first - fish [ j ] .first ) +
        ( fisherman . second - fish [ j ] . second ) * ( fisherman . second - fish [ j ] . second ) ;
        
        if ( temp < shortest ) {
            
            best = j ;
            shortest = temp ;
            //cerr << "best = " << best << ", temp = " << temp << endl ;
        }
    }

    cout << fish [ best ] . first << " " <<fish [ best ] . second << endl ;

}