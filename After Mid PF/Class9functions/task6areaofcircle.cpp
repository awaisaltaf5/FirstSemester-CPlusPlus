#include<iostream>
using namespace std;
void formula(int x){
    cout<<"Area of Circle="<<3.14*x*x;
}
int main(){
    int r;
    cout<<"Enter the radius:";
    cin>>r;
    formula(r);
    
}

