#include<iostream>
using namespace std;

int main() {
 int number;
 cout << "Enter a number between 10 and 20: ";
 cin >> number;
 if (number >= 10 && number <= 20) {
 cout << "The number is within the specified range." << endl;
 } else {
 cout << "The number is outside the specified range." << endl;
 }
}
/*#include<iostream>
using namespace std;
int main(){
	int amount;
	int dicount;
	cout<<"Enter your amount:"<<endl;
	cin>>amount;
	if(amount>=5000){
		cout<<"discounted price:"<<amount-500;
	}else if(amount>4001){
		cout<<"Discounted price:"<<amount-250;
	}else if(amount>3001){
		cout<<"Discounted price:"<<amount-200;
	}else if(amount>2001){
		cout<<"Discounted price:"<<amount-150;
	}else if(amount>1001){
		cout<<"Discounted price:"<<amount-100;
	}else{
		cout<<"Discounted price:"<<amount-50;
	}
	
	return 0;
}*/

