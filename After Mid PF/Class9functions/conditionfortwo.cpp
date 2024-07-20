#include<iostream>
using namespace std;
void add (int x, int y){
cout<<"Sum="<<x+y;
}

int main(){
    int a,b;
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the Second value:";
    cin>>b;
    add(a,b);

    return 0;
}