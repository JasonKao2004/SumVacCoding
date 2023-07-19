#include <iostream>
using namespace std;

int gcd ( int a , int b ) ; //用遞迴

int main(){
    int p , q ;
    
    while ( cin >> p >> q ){    // GCD(q,p) = GCD(q,p%q)  ,, p % r = q % r = 0
        p = gcd(p,q);
        /*
        while ( q ){ // if q = 0  end all
            int t ;
            t = p % q ;
            p = q ;
            q = t ;
        
        }
        */
    cout << p << endl ;
    }
}

int gcd(int a, int b){
    // if b == 0, then gcd is a
    if (b == 0) 
    return a ;
    // else gcd is 
    return gcd( b , a % b ); 

}