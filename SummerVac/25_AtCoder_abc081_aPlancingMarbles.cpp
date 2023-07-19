//There are three squares need to be filled upand it will type in 001 or 000 And you need to count how many one are there and output the Count.
#include <iostream>//Since there only be one and zero, mabye i can use string
#include <string>
using namespace std;
string s;

int main(){

    cin >> s ;
    int a = 0; //a for answar
    
    for (int i = 0; i < 3; i++){
        a += (int)s [ i] - 48 ;
  //  cout << "a =" << a << endl ;
    }
    cout << a << endl ;
}