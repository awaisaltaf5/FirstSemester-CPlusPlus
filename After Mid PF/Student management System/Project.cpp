// Student  management system Project
#include<iostream>
#include<string>
using namespace std;
 const int max_student=100;
 int total=0;
 string roll_number[max_student];
 string name[max_student];
 string course[max_student];
 string Class[max_student];
 string mobile_number[max_student];
 int admission_year[max_student];
 //This function is use to add data of Students
 void add(){
    system("CLS");
     int n;
     cout<<"How many students data do you want to enter?"<<endl;
     cin>>n;
     cin.ignore();
     if(total+n>max_student){
         cout<<"You cannot enter the data  more than "<<max_student<<" student";
        return;
         
     }
     else if(total+n<=0){
         cout<<"Invalid Entry! Please Try again.";
         return;
     }
     for(int i=total;i<total+n;i++){
         cout<<"\nEnter the data of "<<i+1<<" Student:"<<endl<<endl;
         cout<<"Enter the Roll No:";
         getline(cin,roll_number[i]);
         cout<<"Enter the name:";
         getline(cin,name[i]);
         cout<<"Enter the Course name:";
         getline(cin,course[i]);
         cout<<"Enter the Class:";
         getline(cin,Class[i]);
         cout<<"Enter the Mobile number:";
         getline(cin,mobile_number[i]);
         cout<<"Enter the Admission year:";
         cin>>admission_year[i];
         cin.ignore();
     }
     total=total+n;
     
 }
 //This function is used to show data
 void show(){
    system("CLS");
     if(total==0){
        cout<<"No data!";
        return;
     }
     for(int i=0;i<total;i++){
         cout<<"\nData of "<<i+1<<" Student"<<endl<<endl;
         cout<<"Roll No:"<<roll_number[i]<<endl;
         cout<<"Name:"<<name[i]<<endl;
         cout<<"Course:"<<course[i]<<endl;
         cout<<"Class:"<<Class[i]<<endl;
         cout<<"Class:"<<mobile_number[i]<<endl;
         cout<<"Admission year:"<<admission_year[i]<<endl;
     }
     
 }
 //This fuction is use to search the data of student
 void search(){
    system("CLS");
     string search_number;
     cout<<"Enter the Roll number to Search:";
     cin.ignore();
     getline(cin,search_number);
     
     for(int i=0;i<total;i++){
         if(search_number==roll_number[i]){
             cout<<"\nData of "<<i+1<<" Student"<<endl<<endl;
         cout<<"Roll No:"<<roll_number[i]<<endl;
         cout<<"Name:"<<name[i]<<endl;
         cout<<"Course:"<<course[i]<<endl;
         cout<<"Class:"<<Class[i]<<endl;
         cout<<"Class:"<<mobile_number[i]<<endl;
         cout<<"Admission year:"<<admission_year[i]<<endl;
         return;
             
         }
         
     }
     cout<<"Student with "<<search_number<<" is not found!"<<endl;
 }
 //This function is use to update the data of student
 void update(){
    system("CLS");
      string search_number;
     cout<<"Enter the Roll number to Update:";
     cin.ignore();
     getline(cin,search_number);
     
     for(int i=0;i<total;i++){
         if(search_number==roll_number[i]){
             cout<<"\nData of "<<i+1<<" Student"<<endl<<endl;
         cout<<"Roll No:"<<roll_number[i]<<endl;
         cout<<"Name:"<<name[i]<<endl;
         cout<<"Course:"<<course[i]<<endl;
         cout<<"Class:"<<Class[i]<<endl;
         cout<<"Class:"<<mobile_number[i]<<endl;
         cout<<"Admission year:"<<admission_year[i]<<endl;
         cout<<"\nEnter the new data to Update"<<endl;
         cout<<"Enter the Roll No:";
         getline(cin,roll_number[i]);
         cout<<"Enter the name:";
         getline(cin,name[i]);
         cout<<"Enter the Course name:";
         getline(cin,course[i]);
         cout<<"Enter the Class:";
         getline(cin,Class[i]);
         cout<<"Enter the Mobile number:";
         getline(cin,mobile_number[i]);
         cout<<"Enter the Admission year:";
         cin>>admission_year[i];
         cin.ignore();
         
             
         }
         
     }
     cout<<"Student with "<<search_number<<" is not found!"<<endl;
 }
 //This function is use to delete the data according to user requirments
 void Delete(){
    system("CLS");
     int choice;
    cout<<"\nPress 1 to delete Specific Student data:"<<endl;
    cout<<"Press 2 to delete All Data:"<<endl;
    
    cin>>choice;
    cin.ignore();
    if(choice==1){
        string delete_number;
        cout<<"Enter the Roll number to delete:";
        getline(cin,delete_number);
        for(int i=0;i<total;i++){
            if(delete_number==roll_number[i]){
                for(int j=i;j<total;j++){
                    roll_number[j]=roll_number[j+1];
                    name[j]=name[j+1];
                    course[j]=course[j+1];
                    Class[j]=Class[j+1];
                    admission_year[j]=admission_year[j+1];
                }
                total--;
                cout<<"Delete Succesfully!";
                return;
            }
        }
        cout<<"Student with "<<delete_number<<" is not found!"<<endl;
    }
    else if(choice==2){
        total=0;
        cout<<"Delete All Data Succefuly!";
    }
    else{
        "Invalid Choice!";
    }
    
    
     
 }


int main(){
    system("CLS");
    cout<<"       ========================================"<<endl;
    cout<<"           Student Record Management System";
    cout<<"\n       ========================================";
    int choice;
   do{
       
        cout<<"\nPress 1 to Add the Data of Student";
        cout<<"\nPress 2 to Show the Data of Student";
        cout<<"\nPress 3 to Search the Data of Student";
        cout<<"\nPress 4 to Update the Data of Student";
        cout<<"\nPress 5 to Delete the Data of Student";
        cout<<"\nPress 6 to Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            add();
            break;
            case 2:
            show();
            break;
            case 3:
            search();
            break;
            case 4:
            update();
            break;
            case 5:
            Delete();
            break;
            case 6:
            cout<<"Exit Succesfully!";
            break;
            default:
            cout<<"Invalid Entry! Please try again."<<endl;
        }
   }while(choice!=6);
  
        
    
}
 
