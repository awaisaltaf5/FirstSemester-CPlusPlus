#include<iostream>
using namespace std;
int power(int b,int e){
    if(e==0){
        return 1;
        
    }
    return b*power(b,e-1);
}
    
int main(){
    int b,e;
    
    cout<<"Enter the base:";
    cin>>b;
    cout<<"\n Enter the Exponent:";
    cin>>e;
    int p=power(b,e);
    cout<<p;
}