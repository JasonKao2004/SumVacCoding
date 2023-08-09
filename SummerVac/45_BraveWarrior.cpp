#include <iostream>
using namespace std;
int main(){
    long long numA = 0 , numB = 0 ;
    while( cin >> numA ){
        cin >> numB ;
        long long temp = numA - numB ;
        if ( temp < 0 ) cout << 0 - temp << endl ;
        else cout << temp << endl ;
    }
}