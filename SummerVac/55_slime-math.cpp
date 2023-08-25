#include <cmath>
#include <iostream>
using namespace std;
int main(){
    int king = 0 , allofthem = 0 , day = 0 ;
    cin >> king >> allofthem ;
    day = log (allofthem / king + 1 ) / log ( 2 );
    cout << day << endl ; 
}