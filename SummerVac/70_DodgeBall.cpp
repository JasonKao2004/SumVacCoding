#include <iostream>
#include <math.h> 
using namespace std;/*semms like Amot will douge for 15*/

int main(){
    int posA = 0 , catA = 0 , speedA = 0 , balls = 0 ;

    cin >> posA >> catA >> speedA >> balls ;
    
    for ( int i = 0 ; i < balls ; i++ ){
        int posB = 0 , speedB = 0 ;

        cin >> posB >> speedB ;
        
        //cerr << i + 1 << " " ;
        //cerr <<"dis ="<< posA - posB ;
        if ( abs ( posA - posB ) <= catA /* Hit */ ){
           
            if (  speedA >= speedB  /*cat*/){
                //cerr  <<"cat" << endl;
                posA = posB ; // place A to ball
            }
            else /*dodge*/{
                //cerr << "dodge" ;
                
                if /*dodge left*/( posA <= posB ){
                    //cerr << " left" << endl;
                    posA -= 15 ; 
                }
                else /*dodge right*/{
                    //cerr << " right" << endl ;
                    posA += 15 ;
                }
            }
        }
        else /*stay*/ {
            //cerr << "stay" << endl ;
            
        }
        //cerr << "pos = "<< posA << endl ;
    }
    cout << posA << endl ;
}
//warning