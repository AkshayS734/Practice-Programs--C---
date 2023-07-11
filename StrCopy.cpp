#include<iostream>
#include<string>
using namespace std;
void copystr(char *a,char *b);
int main(){
    char str1[100],target[100];
    char *strptr,*targetptr;
    cout<<"Enter a string: ";
    gets(str1);strptr=&str1[0];
    targetptr=&target[0];
    while(*strptr){
        *targetptr=*strptr;
        strptr++;targetptr++;
        }
    *targetptr='\0';
    cout<<"Target string: "<<target<<endl;
    return 0;
}