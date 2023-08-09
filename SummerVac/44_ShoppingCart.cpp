#include <iostream>
using namespace std;

int main(){
    int prod1 = 0 , prod2 = 0 , buyer = 0 , ans = 0 ;
    cin >> prod1 >> prod2 >> buyer ;
    for ( int i = 0 ; i < buyer ; i++ ){
        int temp = 0 , buy1 = 0 , buy2 = 0 ;
        
        while ( cin >> temp ){
            if ( temp == 0 ) break ;
            if ( temp == prod1 ) buy1 += 1 ;
            if ( temp == 0 - prod1 ) buy1 -= 1 ;
            if ( temp == prod2 ) buy2 += 1 ;
            if ( temp == 0 - prod2 ) buy2 -= 1 ;

        }
        if ( buy1 > 0 && buy2 > 0 ) ans++ ;
    }
    cout << ans << endl ;
}

/*
cin prod 1 , 2 
cin how many buyer

begin to detect did they buy the [prod1,1]
while cin , untile cin 0
if cin == prod 1,2 
bool 1 , 2 to count

*/