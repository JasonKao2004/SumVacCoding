#include <iostream>
#include <vector>
using namespace std;

vector <int> n ;

int main(){
    int t;
    while (cin >> t){
        double a = 0 ;
        n.clear();
        n.resize( t );
        for (int i = 0; i < t ; i++){
            cin >> n [ i ] ;
            a += n [ i ] ;
        }
        if ( a / t > 59 )cout << "no" << endl;
        else cout << "yes" << endl;
    }
    
}