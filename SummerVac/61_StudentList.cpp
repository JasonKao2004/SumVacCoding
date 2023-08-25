#include <iostream>
#include <vector>
using namespace std;
vector <bool> num (21);
int main(){
    int N = 0 ;
    cin >> N ;
    for ( int i = 1 ; i <= N ; i++){
        num [ i ] = true ;
    } 
    for ( int j = 0 ; j < 3 ; j++ ){
        int temp = 0 ;
        cin >> temp ;
        num [ temp ] = 0 ;
    }
    for ( int l = 21 ; 0 < l ; l-- ){
        if ( num [ l ] == 1 ) cout << "No. " << l << endl ;
    }
} 