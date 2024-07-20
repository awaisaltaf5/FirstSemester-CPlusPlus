#include<iostream>
using namespace std;
int main(){
	int num1;
	int fact=1;
	cout<<"Enter num1:";
	cin>>num1;
	for(int a=1;a<=num1;a++){
		fact=fact*a;
	}
	cout<<fact;
	return 0;
}
