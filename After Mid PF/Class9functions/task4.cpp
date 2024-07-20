#include<iostream>
using namespace std;
void sum(int x,int y){
cout<<"Sum="<<x+y;
}
void multiply(int x,int y){
cout<<"Product="<<x*y;
}
void subtract(int x,int y){
cout<<"Subtration="<<x-y;
}
void division(int x,int y){
cout<<"Division="<<x/y;
}

 main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the Second number:";
    cin>>b;
    sum(a,b);
    cout<<"\n";
    multiply(a,b);
    cout<<"\n";
    subtract(a,b);
    cout<<"\n";
    division(a,b);


    return 0;
}