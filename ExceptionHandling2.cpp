#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter numerator value : ";
    cin>>num1;
    cout<<"Enter denominator value : ";
    cin>>num2;
    try{
        if(num2 == 0 ){
            throw num2 ;
        }
        cout<<"Result : "<<num1/num2<<endl;
    }
    catch(int n){
        cout<<"Exception caught : divide by zero occurred"<<endl;
    }
    return 0;
}