#include<iostream>
using namespace std;
int main(){
	int bpay,eallowance,mallowance;

	
	
	cout<<"Basic pay:"<<endl;
	cin>>bpay;
	cout<<"Education allowance:"<<endl;
	cin>>eallowance;
	cout<<"Medical allowance"<<endl;
	cin>>mallowance;
	int per=bpay*0.5;
	cout<<"5% of Basic pay:"<<per<<endl;
	int total=bpay+eallowance+mallowance;
	cout<<"Total pay:"<<total<<endl;
	int ded=total-per;
	cout<<"Remaining Pay:"<<ded;
	
	return 0;
}
