#include<iostream>
using namespace std;
void square(int z){
    cout<<"Square="<<z*z;
}


int main(){
    int a,b,c;
    cout<<"Enter the numbers:";
    cin>>a>>b>>c;
    square(a);
    square(b);
    square(c);
    
    return 0;
}