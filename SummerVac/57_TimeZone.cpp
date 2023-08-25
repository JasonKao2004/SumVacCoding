#include <iostream>
using namespace std;
int main(){
    int hr = 0 , min = 0 , sec = 0 , tz = 0 , ansmin = 0 , asnhr = 0 , run = 5400 ;
    cin >> hr >> min >> sec >> tz ; /* 14 39 51 15   01 : 30 */
    sec += hr*60*60 + min*60 + tz * run ;
    sec = (sec %129600 + 129600 ) %129600 ;
    hr = sec / 3600 ;
    min = (sec - hr*60*60) / 60 ;
    sec = sec - hr*60*60 - min*60 ;
    cout << hr << ":" ;
    if ( min < 10 ) cout << "0" << min << ":" ;
    else cout << min << ":";
    if ( sec < 10 ) cout << "0" << sec << endl ;
    else cout << sec << endl ;




}