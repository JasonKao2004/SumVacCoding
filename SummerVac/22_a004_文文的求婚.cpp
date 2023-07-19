#include <iostream>
using namespace std;
int n ;
int main(){

    while ( cin >> n ){ // for it to read until EOF
    if ( n % 4 == 0 && n % 100 != 0 || n % 400 == 0) cout << "閏年" << endl ; //as the quest asked
    else cout << "平年" << endl ;        
    }
}