#include<iostream>
#define <pi 3.14>
using namespace std;
int main(){
	int volume;
	 float radius;
    
	
	// formula of volume of sphereV=4/3pir^3
	volume=(4*3.14*radius*radius*radius)/3;
	cout<<"Enter the value of r:"<<endl;
	cin>>radius;
	cout<<"Volume of spehere:"<<volume;
	
	return 0;
}