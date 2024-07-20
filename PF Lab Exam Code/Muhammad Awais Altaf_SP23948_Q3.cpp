//Feedback collector programe
#include<iostream>
using namespace std;
int n;
int r1,r2,r3;
int rating=5;
int user_rating;
int main(){
	do {
		cout<<"\nEnter 1 to rate us or enter any other number to stop this:";
		cin>>n;
		if(n!=1){
			break;
		}
		cout<<"Please rate our quality out of 5:";
		cin>>r1;
		cout<<"Please rate our price out of 5:";
		cin>>r2;
		cout<<"Please rate our customer service out of 5 :";
		cin>>r3;
		 user_rating=r1+r2+r3;
		float average_rating=user_rating/rating;
		cout<<"\nAverage Rating="<<average_rating;
		
		
		
	}while(true);
}

