#include <iostream>
using namespace std;

int n;
int main(){
    while (cin>>n)
    {
        for(int i=1 ; i<n ; i++){
            if(i%7!=0)cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
/*
input
5
10
20
0

out
1 2 3 4
1 2 3 4 5 6 8 9
1 2 3 4 5 6 8 9 10 11 12 13 15 16 17 18 19


*/