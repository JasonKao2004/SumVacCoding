#include <iostream> 
using namespace std;
int main(){
    int ans = 0 , acc = 0 , spe = 0 ;
    cin >> acc >> spe ;
    if ( spe % acc == 0 ) ans = spe / acc ;
    else ans = spe / acc +1 ;
    cout << ans << endl ;
}