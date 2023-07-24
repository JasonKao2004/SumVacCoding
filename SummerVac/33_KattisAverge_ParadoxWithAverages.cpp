#include <iostream>
#include <vector>
using namespace std;
/* input 
1   number of test cases follow by a blank line

5 5  Ncs Ne     2 ~~ 1000


100 101 102 103 104 IQ of CS
98 100 102 99 101 IQ of E

IQ max is 100,0000

output the number of CS go to E to make the average IQ increase 
1

*/

vector <double>  IQcs ( 1001 ) , IQe ( 1001 ) ;

int main (){
    int T ;
    cin >> T ;
    //cout << "debug T" << T << endl ; 
    for ( int i = 1 ; i <= T ; i ++ ){
        
        double  Ncs = 0 , Ne = 0, sumcs = 0 , sume = 0, arvcs = 0, arve = 0 ;
        int  ans = 0 ;
        cin >> Ncs >> Ne ;
        
        for ( int j = 1 ; j <= Ncs ; j ++){
            cin >> IQcs [ j ] ;
            //cerr << "debug IQcs [" << j << "] " << IQcs[j] << endl ;
            sumcs += IQcs [ j ] ;
            //cerr << "debug sumcs " << sumcs << endl ;
        }
        arvcs = sumcs / Ncs ;
        //cerr << "debug arvcs " << arvcs << endl ;
        for ( int k = 1 ; k <= Ne ; k ++){
            cin >> IQe [ k ] ;
            //cerr << "debug IQe [" << k << "] "  << IQe[k] << endl ;
            sume += IQe [ k ] ;
            //cerr << "debug sume " << sume << endl ;
        }
        arve = sume / Ne ;
        //cerr << "debug arve " << arve << endl ;

        for ( int q = 1 ; q <= Ncs ; q++ ){
            double tempcs = 0 , tempe = 0 ;
            tempcs = ( sumcs -  IQcs [ q ] ) / ( Ncs - 1 ) ;
            
            tempe = ( sume + IQcs [ q ] ) / ( Ne + 1 ) ;

            if ( tempcs > arvcs && tempe > arve ) ans ++ ;
        }
        cout  << ans << endl ;
    }
}