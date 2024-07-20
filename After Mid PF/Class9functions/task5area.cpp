#include<iostream>
using namespace std;
void area(int x, int y){
    cout<<"Area="<<x*y;
}

int main(){
    int l,b;
    cout<<"Enter the length:";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    area(l,b);

    
    return 0;
}