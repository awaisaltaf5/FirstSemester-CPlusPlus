#include <iostream> 

using namespace std; 

int main()
{
    int radius; 
    float volume;
   
cout << " Enter the value of radius: "; 
cin>>radius;

    
    volume = (4 * 3.14 * radius * radius * radius) / 3;

    cout << " The volume of a sphere is : "<< volume << endl; 
    return 0; 
}
