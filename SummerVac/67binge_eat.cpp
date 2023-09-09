#include <iostream> 
using namespace std;
int main(){
    int orgmoney = 0 , min = 0 , K = 0 ;
    int eat[2] = { 32 , 55 } ;
    cin >> orgmoney>> min >> K ;
    if ( eat[K] > orgmoney ) cout << "Wayne can't eat and drink." << endl;
    else {
        for ( int i = 0 ; orgmoney >= eat[K] ; i += min , K = 1 - K ){
            cout << i << ": Wayne ";
            if ( K == 1 ) {
                cout << "drinks a Corn soup, and now he " ;
                orgmoney -= eat[1] ;
            }
            else {
                cout << "eats an Apple pie, and now he " ;
                orgmoney -= eat[0] ;
            }

            if ( orgmoney == 0 ){
                cout << "doesn't have money." ;
            }
            else {
                cout << "has " << orgmoney ;
                if ( orgmoney == 1 ) cout << " dollar." ;
                else cout << " dollars."  ;
            }

            cout << endl ;
            
        }
    }
}