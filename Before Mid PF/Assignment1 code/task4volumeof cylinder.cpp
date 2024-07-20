#include<iostream>
using namespace std;
int main(){
	int radius, height;
	float volume;
	cout<<"Enter the value of radius:"<<endl;
	cin>>radius;
	cout<<"Enter the value of hight:"<<endl;
	cin>> height;
	volume=3.14*radius*radius*height;
	cout<<"Volume of cylinder:"<<volume;
	
	
	return 0;
}

