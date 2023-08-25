#include <iostream>
using namespace std;
int main (){
    int hugeslime = 0 , tinyslime = 0 , day = 0 ;
    cin  >> hugeslime >> tinyslime ; 
    for( int  all = 0 ; all < tinyslime ; day++ ){
         all = all * 2 + hugeslime ;
    }
    cout << day << endl ;
}




