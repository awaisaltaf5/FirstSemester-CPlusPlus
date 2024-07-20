#include<iostream>
using namespace std;
int main(){
	int score;
 cout << "Enter your exam score: ";
 cin >> score;
 if (score >= 90) {
 cout << "Grade: A" << endl;
 } else if (score >= 80) {
 cout << "Grade: B" << endl;
 } else if (score >= 70) {
 cout << "Grade: C" << endl;
 } else if (score >= 60) {
 cout << "Grade: D" << endl;
 } else {
 cout << "Grade: F" << endl;
 }
}
/*int marks;
	cout<<"Enter your marks:"<<endl;
	cin>>marks;
	if(marks>100){
		cout<<"Incorect number";
	}
	else if(marks>90){
		cout<<"A+"<<endl;
	}else if(marks>85){
		cout<<"A"<<endl;
	}else if(marks>81){
		cout<<"A-";
	}else if(marks>76){
		cout<<"B+";
	}else if(marks>71){
		cout<<"B";
	}else if(marks>66){
		cout<<"B-";
	}else if(marks>61){
		cout<<"C+";
	} else if(marks>56){
	cout<<"C";
}else if(marks>=50){
	cout<<"D";
}else{
	cout<<"F";
}
		  
	return 0;*/


