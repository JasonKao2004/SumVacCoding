#include <iostream> //in 87 93 , out 90 ; in 97 94 , out 95
using namespace std; 
/*
看起來判斷是取中間值 偏小的那一個 那應該可以直接用除的 反正會去掉小數
這題我試著用呼叫自訂義子函式來寫
*/

int n1 , n2 , ans ;

void geta ( int &a , int &b ) {
// cout << a << b << endl ;
ans = ( a + b ) / 2 ;
}

int main (){

cin >> n1 >> n2 ;
geta ( n1 , n2 );
cout << ans << endl;

}