#include <iostream>
using namespace std;

int main(){
    int day = 0 ;
    cin >> day ;
    for ( int d = 0 ; d < day ; d++ ){

        int beg = 0 , end = 0 , dev = 0 ;
        cin >> beg >> end >> dev ;
        bool parked = 0 ;
        
        for ( int i = beg + 1 ; i < end ; i++ ){
            
            if ( i % dev != 0 ){
                cout << i << " " ;
                parked = true ;
            }
        }
        if ( parked == false ) cout << "No free parking spaces." ;

        cout << endl ;
    }
}
