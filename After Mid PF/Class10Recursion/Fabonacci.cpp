#include<iostream>
using namespace std;
int fab(int n){
    if(n <= 1){
        return 1;
        }
        return fab(n-2)+fab(n-1);
}
int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"\nFabonaci position of" <<n<<"is:"<<fab(n);
}