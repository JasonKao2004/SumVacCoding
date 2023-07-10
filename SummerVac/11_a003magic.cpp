#include <iostream>
using namespace std;
int main(){
    int m,d,s;
    cin>>m>>d;
    s=(m*2+d)%3;
    if(s==2)cout<<"great";
    else if(s==1)cout<<"good";
    else cout<<"normal";   
}