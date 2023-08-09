#include <iostream>
using namespace std;
int main(){
    int howmany = 0 , scoring = 0 ;
    cin >> howmany ;
    if (  howmany <= 10 ) scoring = howmany * 6 ;
    else if (  howmany <= 20 ) scoring = ( ( howmany - 10 ) * 2 ) + 60 ;
    else if (  howmany <= 40 ) scoring = ( howmany - 20 ) + 80 ;
    else if ( howmany > 40 ) scoring = 100 ;

    cout << scoring << endl ;  
}