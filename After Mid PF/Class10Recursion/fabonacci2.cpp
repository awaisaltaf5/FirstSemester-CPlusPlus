#include<iostream>
using namespace std;
int fab(int n){
    if(n<2){
        return n;
    }
    return fab(n-2)+fab(n-1);
}
int main(){
    int n,x=0;
    cout<<"Enter the number:";
    cin>>n;
    while(x<n){
        cout<<fab(x)<<",";
        x++;
    }
return 0;
}