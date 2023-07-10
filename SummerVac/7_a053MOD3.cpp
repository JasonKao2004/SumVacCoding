#include <iostream>
using namespace std;
int Time,MOD[3];
int main(){
cin>>Time;
for(int n,i=0;i<Time;i++){
    cin>>n;
    if(n%3==0)MOD[0]++;
        else if(n%3==1)MOD[1]++;
            else MOD[2]++;
    }
cout<<MOD[0]<<" "<<MOD[1]<<" "<<MOD[2]<<endl;
}