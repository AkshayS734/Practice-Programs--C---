//Merging two files
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string F1,F2;
    cout<<"Enter the data to be inserted in file 1: ";
    getline(cin,F1);
    cout<<"Enter the data to be inserted in file 2: ";
    getline(cin,F2);
    cout<<"Merging files..."<<endl;
    cout<<"The contents of merged file are: "<<F1<<F2<<endl;
    return 0;
}