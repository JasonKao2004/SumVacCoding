#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a = 0 , b = 0 , c = 0 ;
    cin >> c >> a ;
    if ( c == a ) a -= 3 ;
    b = c - a ;
    if ( a < b )  swap ( a ,b ) ;
    cout << b << "+" << a << "=" << c << endl ;
}