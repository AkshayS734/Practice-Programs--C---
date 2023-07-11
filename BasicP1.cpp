#include<iostream>
int main(){
    int a,sum=0;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    while(a!=0){
    sum=sum+a%10;
    a=a/10;
    }
    std::cout<<"Sum is= "<<sum<<std::endl;
    return 0;
}