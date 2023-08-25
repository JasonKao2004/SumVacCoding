#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std ;

void arr ( ) ;
void math ( ) ;


int main(){
    
     math ( ) ;
}
/*  5 10121315 */
void math ( ){
    int group = 0 , pow = 0 , num = 1 , bestpow = 0 , bestnum = 0 ;
    cin >> group >> pow ;
    for (  ; pow > 0 ;  num ++ ){
        int temp = 0  ;

        for ( int j = 1 ; j <= group && pow > 0 ; j++  , pow /= 10 ){
            temp += pow % 10 ;
            //cout << "num = " << num << " , temp = " << temp << endl ; 
        }
        if ( temp >= bestpow ) bestpow = temp , bestnum = num ;
    }
    cout << bestnum << " " << bestpow << endl ;
}

void arr( ){
    
}

