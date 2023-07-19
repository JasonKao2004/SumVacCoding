#include <iostream>
using namespace std; 
int tar , h , t ; //TAR For Target.H for height. t for time

int triangle( int H ){
    int i = 1 ;  //start at 1
    while ( i != 0 ){ 
        
        for (int j = 0; j < i ; j++){      // cout 1~~H
            cout  <<i ;
        }
        
        //cout << "b" <<endl ;
        i ++ ;

        if ( i <= H )cout  << endl ;
        else{ 
            cout  << endl;
             i = i -2 ;
            while (i >= 0){
                for (int j = i ; j > 0 ; j--){
                cout << i ;
            }
            cout  <<endl ;
            i -- ;
            }
        break;
        } 



        /*if ( i > H ){
            i -- ;
            while (i >= 0){
                for (int j = i ; j > 0 ; j--){
                cout << i << "c";
            }
            cout <<"d" <<endl ;
            i -- ;
            }
        break;
        }
        else cout << "b"<< endl ;
        */

    }
    


}

int main(){

    cin >> tar ;
    for (int i = 0; i < tar ; i++){
        cin >> h >> t ;
        
        for (; t != 0 ; t-- ){
           triangle( h ) ;
        }
        
        
    }
    
} 













/*
範例輸入 #1
2

3
2
5
3

範例輸出 #1
1
22
333
22
1

1
22
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1
*/