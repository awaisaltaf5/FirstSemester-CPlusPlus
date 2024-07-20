#include<iostream>
using namespace std;
void show();
void show(){
    for(int i=0;i<=5;i++){
        cout<<"*";
    }
    cout<<endl;
}

int main(){
    show();
    show();
    cout<<"Hello";
    cout<<"\n";
    show();
    show();
    return 0;
}