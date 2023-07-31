#include <iostream>
#include <vector>
using namespace std;

int tim = 0 ;
int main(){
    cin >> tim ;
    int test  = 0 ;
    bool sym = true ;
    for ( int t = 0 ; t < tim ; t++ ){
        int N = 0 ;
        test ++ ;
        sym = true ;
        char trash ;
        cin >> trash >> trash >> N ;
        //cout << n;
        vector < vector <double> > matrix ( 101 , vector <double> (101) );
        /*
        5 1 3
        2 0 2
        3 1 5

        1 2 3 4 
        5 0 7 4 
        4 7 0 5
        4 3 2 1
        cause im not sure where to cut in half so i better use square array */
        for ( int i = 1 ; i <= N ; i++ ){
            for ( int j = 1 ; j <= N ; j++ ){               
            cin >> matrix [ i ] [ j ] ; // this loops puts in those numbers
            //cout << "debug cin , i = " << i << ", j = "<< j << ", martix [i][j] =" << matrix [ i ] [ j ] << endl ;
            }
        }
        for (int verti = 1; verti <= N ; verti++) {    
        
            for (int horiz = 1; horiz <= N ; horiz++) {   
                //cerr << "debug  ver = "<< verti <<", horiz =" << horiz <<",[ N - verti + 1 ] = "<< N - verti + 1 << ",[ N - horzi +1 ] = "<< N - horiz +1 << endl ;
                //cerr << "matrix [ "<< verti << " ], [ "<< horiz <<" ]" << matrix [ verti ] [ horiz ] << ", matrix [ verti + 1 ] [N - horiz + 1] ="<< matrix [N - verti + 1] [N - horiz + 1] << endl ; 
                if ( matrix [ verti ] [ horiz ] != matrix [ N - verti + 1 ] [ N - horiz + 1] || matrix [ verti ] [ horiz ] < 0 || matrix  [ N - verti + 1 ] [ N - horiz + 1] < 0)  
                    sym = false;
            }
            }
        
        if ( sym ) cout <<"Test #"<< test <<": Symmetric." << endl;
        else cout <<"Test #"<< test <<": Non-symmetric." << endl;
    }
} 
            
 /*
2
N = 3
5 1 3
2 0 2
3 1 5
N = 3
5 1 3
2 0 2
0 1 5
*/       
        

