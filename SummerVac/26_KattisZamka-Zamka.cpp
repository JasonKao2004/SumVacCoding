#include <iostream>
#include <string>
using namespace std; 
//string s ;
int main(){
    int l , d , x , i , min = 10001 , max = -1;
    cin >> l >> d >> x ;
    i = l ;
    string s = "" ;
    
    while( i <= d ){
        int a = 1 , b = 0 , n = i ;
        while (n!=0) {
            a = n % 10 ;
            n = n / 10 ;
            b = b + a ;
        }
        if ( b == x ){
             if ( i < min ) min = i ;
             if ( i > max ) max = i ;
        }
        i = i + 1 ;
    }
cout << min << endl << max << endl ;
}