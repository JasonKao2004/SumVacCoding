#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector <int> v ( 101 ) ;
int main(){
    int t , temp = 0 ; //t for time
    cin >> t ;
    v [ 1 ] = 1 ;
    for ( int i = 2 ; i <= t ; i ++ ) {
        cin >> temp ;
        v [ 1 + temp + 1 ] = i ; 
    }
    for ( int i = 1 ; i <= t ; i ++){
        cout << v [ i ] << " ";
    }
    cout << endl ;
}