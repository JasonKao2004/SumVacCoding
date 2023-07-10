#include <iostream>
using namespace std;

/*
– 範例輸入 –
7 5
– 範例輸出 –
a: 6, b: 1
– 範例輸入 –
3 9
– 範例輸出 –
a: 6, b: -3
*/

int main(){
int a , b , x , y ;
cin >> x >> y ;
//a + b = x , a - b = y ;
a = ( x + y ) / 2 , b = ( x - y ) / 2 ;
cout << "a: " << a << ", b: " << b << endl ;
return 0 ;
}