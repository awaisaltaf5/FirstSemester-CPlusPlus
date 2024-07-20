#include<iostream>
using namespace std;
int main(){
    int num=1234;
    int sum;
    int a=num%10;
    int tem=num/10;
    int b=tem%10;
    tem=tem/10;
    int c=tem%10;
    int d=tem/10;
    cout<<a;
    cout<<b;
 cout<<c;
  cout<<d;
  sum=a+b+c+d;
  cout<<"\nsum"<<sum;

}      