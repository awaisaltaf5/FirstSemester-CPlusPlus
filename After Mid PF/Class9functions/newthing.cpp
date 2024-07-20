#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}

int main(){
    int a;
    cout<<"Enter the value:";
    cin>>a;
    int z=square(a);
    cout<<"Square="<<z;

    return 0;
}