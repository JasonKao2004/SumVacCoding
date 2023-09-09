#include <iostream>
using namespace std;

int main(){
    int eyeballing = 0 , hight = 0 , exp = 0 , day = 1;
    cin >> hight >> exp >> eyeballing ;

    while ( eyeballing != 0 && hight < exp ){
        
        if ( day % 11 == 0 ){
            if ( hight < exp ){
                eyeballing -- ;
            }
        }

        if ( day % 9 == 0 ){}
            else if ( day % 10 == 0 ){}
                else if ( day % 3 == 0 ){ hight += hight / 3 ; }
                    else { 
                    hight += hight / 10 ; 
                    }
        



        day ++ ;
    }
    if ( eyeballing == 0 )cout << "unsalable" << endl ;
    else cout << day << endl ;
    
}