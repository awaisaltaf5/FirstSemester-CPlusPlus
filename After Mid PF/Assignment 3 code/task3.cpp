#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the element number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"Maximum number:"<<maxNo;
    cout<<"\nMinimum number:"<<minNo;
    return 0;
}