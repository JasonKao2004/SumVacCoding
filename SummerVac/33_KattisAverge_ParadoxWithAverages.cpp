#include <iostream>
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

int  IQcs [ 1001 ] , IQe [ 1001 ] ;

int main (){
    int T ;
    cin >> T ;
    cout << "debug T" << T << endl ; 
    for ( int i = 1 ; i <= T ; i ++ ){
        int Ncs = 0 , Ne = 0 ;
        cin >> Ncs >> Ne ;
        for ( int j = 1 ; j <= Ncs ; j ++){
            cin >> IQcs [ j ] ;
            cout << "debug IQcs [" << j << "] " << IQcs[j] << endl ;
        }
        for ( int k = 1 ; k <= Ne ; k ++){
            cin >> IQe [ k ] ;
            cout << "debug IQe [" << k << "] "  << IQe[k] << endl ;
        }

    }
}