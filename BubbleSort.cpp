#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cout<<"Enter the number of data element to be sorted : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Data ";
    for(i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}