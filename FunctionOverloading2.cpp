#include<iostream>
#include<cmath>
using namespace std;
inline int power(int number, int pwr){
    return pow(number , pwr);
}
inline double power(double number, int pwr){
    return pow(number , pwr);
}
void fun(int number){
    cout<<"The square of "<<number<<" : "<<number*number<<endl;
    cout<<"The cube of "<<number<<" : "<<number*number*number<<endl;
}
void fun2(double number){
    cout<<"The square of "<<number<<" : "<<number*number<<endl;
    cout<<"The cube of "<<number<<" : "<<number*number*number<<endl;
}
int main(){
    int a,c;double b;cout<<"Enter any integer value : ";cin>>a;
    cout<<"Enter any double value : ";
    cin>>b;cout<<"Enter the power value : ";
    cin>>c;
    fun(a);
    cout<<"The "<<a<<" to the power of "<<c<<" : "<<power(a,c)<<endl;
    fun2(b);
    cout<<"The "<<b<<" to the power of "<<c<<" : "<<power(b,c)<<endl;
    return 0;
}