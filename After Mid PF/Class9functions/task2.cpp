#include<iostream>
using namespace std;
void square(int z){
    cout<<"Square="<<z*z;
}


int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    square(a);
    
    return 0;
}