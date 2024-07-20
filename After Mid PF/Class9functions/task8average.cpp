#include<iostream>
using namespace std;
float average(int x, int y, int  z){
return (x+y+z)/3;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    float t= average(a,b,c);
    cout<<t;
    return 0;
}