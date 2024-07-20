#include <iostream>
using namespace std;

int main() {
    int sum=0;
    for(int i=1; i<=5;i++){
        cout<<i*i<<endl;
        sum=sum+i;  
    } 
    cout<<"\n"<<sum;

    return 0;
}