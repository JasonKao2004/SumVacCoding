#include <iostream>

using namespace std ;
int main(){
    int Qant = 0 , Qhop = 0 , Hant = 0 , Hhop = 0 ;
    cin >> Qant >> Qhop ;
    for ( int i = 0 ; i < Qant ; i++ ){
        int temp = 0 ;
        cin >> temp ;
        Hant += temp ;
        //cout << "[ANT] cin =[" << temp << "] Hant = [" << Hant << "]" << endl ;
    } 
    for (int j = 0 ; j < Qhop ; j++ ){
        int temp = 0 ;
        cin >> temp ;
        Hhop += temp ;
        //cout << "[GRASSHOPPER] cin =[" << temp << "] Hhop = [" << Hhop << "]" << endl ;
    }
    if ( Hant > Hhop && Qant > Qhop ) cout << "Yes" << endl ;
    else cout << "No" << endl;
}