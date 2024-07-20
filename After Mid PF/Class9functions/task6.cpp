#include<iostream>
using namespace std;
//(a+b)^2=a^2+b^2+2ab;
void formula(int x,int y){
cout<<x*x+y*y+2*x*y;
}

int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    formula(a,b);

    return 0;
}