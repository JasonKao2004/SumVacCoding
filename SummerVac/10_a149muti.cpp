#include <iostream>
using namespace std;
long long T , n ;
/*
int math(){
    int a,b;
    cin >> T;
    for (int i = 0; i < T; i++) {
        a = 1 , b = 1 ;
        cin >> n;
        if(n!=0){
            while (n!=0) {
                a = n % 10;
                n = n / 10;
                if ( a == 0 && n == 0) break;
                b = b * a;
    //       cout << b << endl;       
        }
        cout<<b<<endl;
        }
        else cout<<0<<endl;
    }
    
    
}
*/
string s;
int a;
int main ( ) {
   
    cin>>T;
    for ( int t = 0 ; t < T ; t++){
        
        a = 1 ;
        cin >> s;
 //       cout << s << endl;
        
        for ( int i = 0  ; i <= s.length ( ) - 1 ; i ++){
            a = a * ( ( int )s [ i ] - 48 ) ;
 //           cout << ( int ) s [ i ]  << endl;
        }
    cout << a << endl;
    }
}