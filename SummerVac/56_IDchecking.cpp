/* start at 23/8/21 pm 3:21 , end at 23/8/21 pm 8:55*/
#include <iostream>
/*cin a long number
if the two greatest number squar and combined = last 3 number
cout good morning 
else cout spy!*/
using namespace std;

int main(){
    int greatest = 0 , secbest = 0 , id = 0 , checker = 0 ;
    cin >> id ;
    checker = id % 1000 ;
    //cout << "debug checkr = " << checker << endl ;

    for ( int counter = 0 ; counter < 9 ; counter ++ , id /= 10 ){
        int temp = id % 10 ;
        if ( temp > greatest ) secbest = greatest , greatest = temp ;
        else if ( temp >= secbest ) secbest = temp ;        
    }

    if ( greatest * greatest + secbest * secbest  == checker ) cout << "Good Morning!" << endl ;
    else cout << "SPY!" << endl ; 
}
/*
1st try wrong spelling 50% 
2nd try change "temp > secbest" to " >= " , 80%
3rd still 80%
*/