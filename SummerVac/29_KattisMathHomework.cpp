/*
look is like it need me to count 
To count all possible combination.

The first three number represents the legs
the last number represent the goal
needs to output all possible combinations

我覺得可以用進位寫
*/

#include <iostream>
using namespace std;

int a, b, c;

int main(){
    int aa , bb , cc , t ; 
    cin >> a >> b >> c >> t ;
    bool x = true ;
    aa = t / a , bb = t / b , cc = t / c ;
    
    for (int i = 0; i <= aa; i++){
        for (int j = 0; j <= bb; j++){
            for (int k = 0; k <= cc; k++){
                if( t == ( i * a + j * b + k * c ) ){
                cout << i << " " << j << " " << k << endl;
                x = false ;
                }
            }
        }
    }
    if( x ) cout << "impossible" << endl ;
}