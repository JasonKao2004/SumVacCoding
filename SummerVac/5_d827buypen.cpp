#include <iostream>
using namespace std;
int cost, pen;

int main(){
cin>>pen;
cost=(pen/12)*50+(pen%12)*5;
cout<<cost;
}