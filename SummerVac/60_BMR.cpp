#include <iomanip> /*fixev setprecision()*/
#include <iostream>
using namespace std;
/*BMR(男) = (13.7×體重(kg)) + (5.0×身高(cm)) - (6.8×年齡) + 66。

BMR(女) = (9.6×體重(kg)) + (1.8×身高(cm)) - (4.7×年齡) + 655。*/
int main(){
    int sub = 0 , malepatch = 66 , femalepatch = 655 ;
    cin >> sub ;
    for( int i = 0 ; i < sub ; i++ ){
        int  gender = 0 ;
        double ans = 0 , age = 0 , hight = 0 , weight = 0 ;
        cin >> gender >> age >> hight >> weight ;
        
        if( gender == 1 /* male */){
            ans += age * (-6.8)  + hight * 5 + weight * 13.7 + malepatch ;
            cout << fixed << setprecision( 2 ) << ans << endl ;
        }
        else {
            ans += age * (-4.7)  + hight * 1.8 + weight * 9.6 + femalepatch;
            cout << fixed << setprecision( 2 ) << ans << endl ;
        }
    }
}