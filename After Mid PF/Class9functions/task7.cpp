#include<iostream>
using namespace std;
int formula (int x){
return x*x;
}

int main(){
    int a,b,c;
    cout<<"Enter the the value of a:";
    cin>>a;
    cout<<"Enter the the value of b:";
    cin>>b;
    cout<<"Enter the the value of c:";
    cin>>c;
    int z1= formula(a);
    int z2= formula(b);
    int z=z1+z2+c;
    cout<<z;
    
    return 0;
}