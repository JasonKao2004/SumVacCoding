#include <iostream>
using namespace std;
int main(){
    int move = 0 , oldfloor = 1 , up = 3 , down = 2 , ans = 0 ;
    cin >> move ;
    for ( int i = 0 ; i < move ; i++ ){
        int newfloor = 0;
        cin >> newfloor ;
        if ( newfloor > oldfloor ){
            ans += ( newfloor - oldfloor ) * up ;
           // cout << "up [" << newfloor - oldfloor << "]" << endl ;
        }
        else {
            ans += ( oldfloor - newfloor ) * down ;
           // cout << "down [" << oldfloor - newfloor << "]" << endl ; 
        }
        oldfloor = newfloor ;
    }
    cout << ans << endl ;
}