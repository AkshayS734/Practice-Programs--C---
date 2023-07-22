//counting words and characters in a file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main (){
    string n;
    cout<<"File name: ";
    cin>>n;
    ifstream READ;
    READ.open(n);
    string R;
    getline(READ,R);
    // cout<<"File name: "<<n<<endl;
    int i=0,
    C=R.length(),W = 1 ;
    for(i=0;i<C;i++){
        if(R[i]==' '){
            W++;
        }
    }
    cout<<"Word count: "<<W<<endl<<"Character count: "<<C<<endl;
    return 0;
}