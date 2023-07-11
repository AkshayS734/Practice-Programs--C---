#include<iostream>
#define max 100
using namespace std;
int main(){
    char str1[max],str2[max];
    char*s1=str1;
    char*s2=str2;
    cout<<"enter first string: ";
    cin>>str1;
    cout<<"enter second string: ";
    cin>>str2;
    while(*(++s1));
    while(*(s1++) = *(s2++));
    cout<<"The concatenated string is "<<str1;
    return 0;
}