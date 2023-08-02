#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> fence ( 100 ) ;
    int t = 0 , ans = 0 ;
    cin >> t ;
    for ( int i = 0 ; i < t ; i ++ ){
        cin >> fence [ i ] ;
    }
    for ( int j = 0 ; j < t ; j ++ ){
        if ( j == 0  &&  fence [ j ] == 0 ) ans += fence [ j + 1 ] ;
        else if ( j == t - 1 && fence [ j ] == 0 ) ans += fence [ j - 1 ] ;
        else if ( fence [ j ] == 0 ){
            if ( fence [ j - 1 ] > fence [ j + 1 ]) ans += fence [ j + 1 ] ;
            if ( fence [ j - 1 ] < fence [ j + 1 ]) ans += fence [ j - 1 ] ;
            if ( fence [ j - 1 ] == fence [ j + 1 ]) ans += fence [ j - 1 ] ;
        }    
    
    }   
    cout << ans << endl ; 
}















/*Sample Input #1
3
2 0 4
Sample Output #1
2
Sample Input #2
9
0 5 3 0 6 4 0 1 0
Sample Output #2
10*/