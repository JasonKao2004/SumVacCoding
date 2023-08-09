#include <iostream>
using namespace std;

int main(){
    int num = 0 ;
    cin >> num ;
    for ( int i = 0 ; i < num ; i++ ){
        for( int k = 1 ; k < ( num - i ) ; k++ ){
            cout << "_" ;
        }
        for ( int j = 0 ; j < 1 + 2*i ; j++ ){
            
            cout << "*" ;

        }
        for( int k = 1 ; k < ( num - i ) ; k++ ){
            cout << "_" ;
        }
        cout << endl ;
    }
}