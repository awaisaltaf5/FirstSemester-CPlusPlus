#include <iostream>
using namespace std;
struct student
{
char name[80];
int rollnumber;
int chemistry, physics, math;
};
int main()
{
student s[5];
double persentage;
double total;
cout << "Enter the Data of 5 stdents!" << endl;
for (int i = 0; i < 5; i++)
{
cout << "Enter Name:";
cin >> s[i].name;
cout << "Enter RollNumber:";
cin >> s[i].rollnumber;
cout << "Enter chemistry Marks:";
cin >> s[i].chemistry;
cout << "Enter  Physics Marks: ";
cin >> s[i].chemistry;
cout << "Enter math Marks:";
cin >> s[i].math;
}
for (int i = 0; i < 5; i++)
{
total = s[i].chemistry + s[i].physics+ s[i].math;
persentage = (total * 100) / 300;
cout << "Peresntage of "<<s[i].name<<" is " << persentage << endl;
}
}
