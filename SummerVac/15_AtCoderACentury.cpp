#include <iostream>
using namespace std;

int main ( ) {
int n = 0 ;
cin >> n ;
if ( n % 100 != 0) cout << n / 100 + 1 << endl;
else cout << n / 100 << endl ;
}