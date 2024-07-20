#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Binary number:"<<bitset<32>(num);
	return 0;
}

