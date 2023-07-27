#include<iostream>
#include <vector>
using namespace std;
vector <int>  w ( 101 ) ;
vector <bool> ans ( 101 ) ;
int main(){
    int n = 0  , t = 0 ;
    cin >> n >> t ;
    for ( int i = 1 ; i <= t ; i ++ ){
        cin >> w [ i ] ;
        w [ i + 1 ] = n ;
        //cout << "debug w [" << i  << "] = " << w [i] << endl ;  
    }
    for ( int i = 0 ; i <= (t + 1) ; i++ ){
        for ( int j = 0 ; j <= i ; j++){
        int temp = 0 ;
        temp = w [ i ] - w [ j ] ;
        //cout << "debug i = "<< i << "  j = " << j << " temp = " << temp << endl;
        if ( ans [ temp ] == 0 ) ans [ temp ] = true ; 
        }
    }
    for ( int i = 1 ; i <= 100 ; i ++){
        if ( ans [ i ] == true ) cout << i << " " ;
    }
    cout << endl ;
}

/*
  10| 8| 4| 1| 0|
10 \| 2| 6| 9|10|
 8 \| \| 4| 7| 8|
 4        | 3| 4|
 1           | 1|
 0
 */