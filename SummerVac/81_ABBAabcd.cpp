#include <iostream>
#include <string>
using namespace std;

string urmama ;

int main(){
    cin >> urmama ;
    int half = urmama.length() / 2 , howlong = urmama.length() ;
    bool checker = true ;
    if ( howlong == 1 ){
        cout << "yes" << endl ;
    }
    else{
        for ( int i = 0 ; i < half ; i++ ){ /* end -1 everytime*/
            int end = howlong - i - 1 ;
            if ( urmama [ i ] != urmama [ end ] ){
                checker = false ;
                break ;
            }
        }
        if ( checker ){
            cout << "yes" << endl ;
        }
        else{
            cout << "no" << endl ;
        }
    }
}