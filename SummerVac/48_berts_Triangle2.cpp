#include <iostream>
using namespace std;

int main(){
    int num = 0 ;
    cin >> num ;
    for ( int i = 1 ; i <= num ; i++ ){
        for( int k = 0 ; k < ( num - i ) ; k++ ){
            cout << "_" ;
        }
        for ( int j = 0 ; j < i ; j++ ){
            
            cout << "*" ;

        }
        cout << endl ;
    }
}