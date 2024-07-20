#include<iostream>
using namespace std;

int main() {
   int dividend,divisor,qoutient,remainder;
   cout<<"Enter dividend: ";
   cin>>dividend;
   cout<<"Enter divisor: ";
   cin>>divisor;
   qoutient=dividend/divisor;
   remainder=dividend%divisor;
  
   cout<<"Qoutient:"<<qoutient<<endl;
   cout<<"Remainder:"<<remainder;
    return 0;
}
