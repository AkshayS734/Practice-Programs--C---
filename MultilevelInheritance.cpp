#include <iostream>
using namespace std;
class Student {
    private :
    int id;
    char name[30];
    public:
    void readData(){
        cout<<"Enter student id and name : ";
        cin>>id>>name;
    }
    void displayData(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
class Test : public Student {
    protected:
    float m1, m2, m3;
    public:
    void readMarks(){
        cout<<"Enter three subjects marks : ";
        cin>> m1>>m2>>m3;
    }
};
class Result : public Test {
    private:
    float tot, avg;
    public:
    void displayTotAvgGrades(){
        tot = m1+m2+m3;
        avg = tot/3;
        cout<< "Three subjects marks : "<<m1<<" "<<m2<<" "<<m3<<endl;
        cout<<"Total marks : "<<tot<<endl;
        cout<<"Average marks : "<<avg<<endl;
        if(avg>=75){
            cout<<"Distinction"<<endl;
        }
        else if(avg >= 60){
            cout<<"First class"<<endl;
        }
        else if(avg>=50){
            cout<<"Second class"<<endl;
        }
        else if(avg>=35){
            cout<<"Third class"<<endl;
        }
        else if(avg<35){
            cout<<"Very poor in studies"<<endl;
        }
        else {
            cout<<"some error in avg";
        }
    }
};
int main() {
    Result r;
    r.readData();
    r.readMarks();
    r.displayData();
    r.displayTotAvgGrades();
    return 0;
}