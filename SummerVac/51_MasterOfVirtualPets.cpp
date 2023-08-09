#include <iostream>
using namespace std;
int main(){
    int pet = 0 , sand = 0 , curCP = 0 , curIV = 0 , addinglev = 0 , bestPet = 0 , bestCP = 0 ;
    cin >> pet >> sand ; 
    addinglev = sand / 1000 ;

    for ( int num = 1 ; num <= pet ; num++ ){
        cin >> curCP >> curIV ;
        
        for /* adding CP */ ( int grow = addinglev ; grow > 0 ; grow-- , curIV++ ){
            cout << " grow = " << grow << endl ;

            if ( curIV > 39 ) {
                curCP += 100 ;
                cout << "lev = [ " << curIV << " ] , CP + 100 , CP = [ " << curCP << " ]"<< endl ;
            }  
            else if ( curIV > 29 ) { 
                curCP += 50 ;
                cout << "lev = [ " << curIV << " ] , CP + 50 , CP = [ " << curCP << " ]"<< endl ;
            }
            else { 
                curCP += 10 ;
                cout << "lev = [ " << curIV << " ] , CP + 10 , CP = [ " << curCP << " ]"<< endl ;
            }
        }
        if ( curCP > bestCP ) bestCP = curCP , bestPet = num ;

    }
    cout << bestPet << " " << bestCP << endl ;

}

/*
 
4 55555
200 42
400 40
500 30
3000 27
*/


/*
1 cin all of them
2 Calculate how many level can they get
3 


5000
50 lv
after lev 45 add 100 per lev
*/