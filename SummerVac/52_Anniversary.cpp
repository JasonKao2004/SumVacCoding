#include <iostream>
using namespace std;

int main(){
    int prise = 0 , p0 = 0 , p1 = 0 ;
    cin >> prise ;
    p0 = prise - ( prise / 2000 ) * 200 ;
    p1 = prise - ( prise / 1000 ) * 100 ;
    if ( p1 < p0 ) cout << p1 << " " << 1 << endl ;
    else cout << p0 << " " << 0 << endl ;
}

/*
0 == -200 per 2000
1 == -100 per 1000
*/