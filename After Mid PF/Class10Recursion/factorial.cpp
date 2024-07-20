#include<iostream>
using namespace std;
int fac(int n){
    if(n <= 1){
        return 1;
        }
        return n*fac(n-1);

}


int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"\nFactorial " <<n<<"is:"<<fac(n);
}
