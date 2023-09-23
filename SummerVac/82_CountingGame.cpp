#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;


int main(){
    /*not alphabet not continuous, means another word */
    string sentence = "" ;
    
    while ( getline ( cin , sentence ) ){
        int counter = 0 ;    

        for ( int i = 1 ; i < sentence.length() ; i++ ){
            if ( isalpha ( sentence [ i ] ) == 0 ){
                //cerr << "i = " << i << endl ;
                if ( isalpha ( sentence [ i - 1 ] )  ){
                    counter ++ ;

                } 
            }
        }
        if ( isalpha ( sentence [ sentence.length() - 1 ] ) ){
            counter ++ ;
        }
        cout << counter << endl ;
    }
}