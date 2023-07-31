#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> arr ;
    int num ;
    while (cin >> num ){
        arr.clear();
        for ( int i = 0 ; i < num ; i++){
            int temp = 0 ;
            cin >> temp ;
            arr.push_back( temp );
        }
        sort( arr.begin() , arr.end() , less <int>() );
        for ( int i = 0 ; i < num ; i++){
            cout << arr [ i ] << " ";
        }
        cout << endl ;
    }
}