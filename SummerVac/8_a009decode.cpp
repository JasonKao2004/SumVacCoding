#include <iostream>
#include <cstring>
using namespace std;

string s;
char temp;

int main(){

    cin>>s;

    for(int i=0; i<=s.length()-1 ; i++){
        temp=s[i]-7;
        cout<<temp;
    }
}
