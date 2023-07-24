#include <iostream>
#include <vector>
using namespace std;
/*Basically, it is counting dates.ignore those repeated.*/
vector<bool> d ( 366 ) ;
int main(){
    int n , beg = 0 , end = 0 , ans = 0;
    cin >> n ;
    /*planing on use array to check dates , and count all of them at the end*/
    for ( int i = 0 ; i < n ; i ++){
        cin >> beg >> end ;
        for ( int j = beg ; j <= end ; j ++){
            if ( d [ j ] == false ) d [ j ] = true , ans++ ;
        }
    }
    cout << ans << endl ;
}