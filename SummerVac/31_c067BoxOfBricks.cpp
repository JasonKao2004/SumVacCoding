// only need to get the average number.And the next will only be like.count the difference.
#include <iostream>
#include <string>
#include <cmath>
#include <vector>   
   
using namespace std;

int t ,set = 0;
vector <int> h ( 51 ) ; //using vector 
int main(){
    while ( cin >> t ){
        if ( t == 0 ) break ;

        int total = 0 , arv = 0 , move = 0 ;
        set ++ ;
        for ( int i = 0 ; i < t ; i++ ){
            cin >> h [ i ] ;
            total += h [ i ] ;
        }

        arv = total / t ;
        for ( int i = 0 ; i < t ; i ++ ){
            if ( h [ i ] > arv ) move += h [ i ] - arv ;
        }
         cout << "Set #" << set << endl << "The minimum number of moves is " << move << "." << endl;
    }
}



















//i want to use "getline" but forget ,need to go back to check  
/*
string s ;
int main(){
    int t = 0 ,arv = 0 , temp = 0, set = 0;
    
    while (cin >> t){
        set ++ , temp = 0 , arv = 0;
//        cout << "debug t " <<endl ;
        if( t == 0 ) break;
        
        cin.ignore ( ) ;
        getline ( cin , s );
 //       cout << "debug s" << s <<endl ;
        
        for ( int i = 0 ; i < s.size() ; i++ ){
            
            if( (int)s[i] != 32 ){
                arv = ( arv + (int)s[ i ]  - 48  ) / 2  ;
//                cout << "debug arv"<< arv <<endl ;
            }       
        }

        for ( int i = 0 ; i < s.size() ; i++ ){
            
            if( (int)s[i] != 32 ){
                temp = temp + abs( arv - ((int)s[ i ] - 48 )  )   ;
 //               cout << "debug temp"<< temp <<endl ;
            }       
        }
        cout << "Set #" << set << endl << "The minimum number of moves is " << temp / 2 << "." << endl;
    }
    

}
*/
/*
6
5 2 4 1 7 5
3
1 1 1
0
範例輸出 #1
Set #1
The minimum number of moves is 5.

Set #2
The minimum number of moves is 0.
*/