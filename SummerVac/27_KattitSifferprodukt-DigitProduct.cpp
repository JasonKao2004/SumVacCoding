#include <iostream>
using namespace std;
int x ;

int muti( int x ){
int a = 1 , b = 1 ; //for temporary digits 
    
    while ( x != 0 ){
        a = x % 10 ;
        x /= 10 ;
        if ( a != 0 ) b = b * a ;
    }
    return b ;
}

int main(){
    cin >> x ;
    while ( x / 10 != 0 ){
        x = muti( x ) ;
//        cout << "x = " << x << endl ;
    } 
cout << x << endl;
}