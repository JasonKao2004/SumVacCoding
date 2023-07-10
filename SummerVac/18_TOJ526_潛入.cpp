#include <iostream>
#include <string>
using namespace std;

/* input 3degit posative int n as the translation subject 
output not start with 0
700 -> 7 not 007
左右相反然後去掉0
但不能被070這種數字誤會
打算用陣列
*/

string n ;
int a ; 

int main () {
int m = 1 ;
cin >> n ;
    for ( int i = 0 ; i <= 2 ; i++){
        //cin >> n [ i ] ;
        
        if ( ( int ) n [ i ] != 48 ){
            a = a + ( ( ( int ) n [ i ] - 48) * m ) ; 
        //cout << "a =" << a << endl ; 就想說怎麼沒過 忘記刪偵錯XDDDD
        }
        m = m * 10 ;
    }
cout << a << endl ;
}