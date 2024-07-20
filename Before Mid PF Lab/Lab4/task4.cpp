#include<iostream>
using namespace std;
int main() {
 double purchaseAmount, discount = 0;
cout << "Enter the purchase amount: $";
 cin >> purchaseAmount;
 if (purchaseAmount >= 500) {
 discount = 0.1 * purchaseAmount;
 } else if (purchaseAmount >= 200) {
 discount = 0.05 * purchaseAmount;
 }
 cout << "Discount: $" << discount << endl;
 cout << "Total cost: $" << purchaseAmount - discount << endl;
}

/*#include<iostream>
using namespace std;
int main(){
	 float s1,s2,s3,s4,s5,s6;

cout<<"Enter your Marks"<<endl;
cout<<"Sunject 1:"<<endl;
cin>>s1;
cout<<"Sunject 2:"<<endl;
cin>>s2;
cout<<"Sunject 3:"<<endl;
cin>>s3;
cout<<"Sunject 4:"<<endl;
cin>>s4;
cout<<"Sunject 5:"<<endl;
cin>>s5;
cout<<"Sunject 6:"<<endl;
cin>>s6;
float total=600;
float obtain=s1+s2+s3+s4+s5+s6;
float percentage=(obtain/total)*100;
cout<<"Pecentage:"<< percentage;


	return 0;
}*/