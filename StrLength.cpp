#include<iostream>
#include<string>
using namespace std;
int stringlen(char *str){
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
        }
    return length;
    }
int main(){
    int len;
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;
    len=stringlen(str);
    cout<<len<<endl;
}