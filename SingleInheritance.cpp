#include <iostream>
using namespace std;
class Student {
    private:
    int id;
    char name[30];
    public:
    void readData(){
        cout<<"Enter student id and name : ";
        cin>> id>> name;
    }
    void displayData(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
class Marks : public Student {
    private:
    float m1, m2, m3, total, avg;
    public:
    void readMarks(){
        cout<<"Enter three subjects marks : ";
        cin>> m1>>m2>>m3;
    }
    void displayTotAvgMarks(){
        total = m1+m2+m3;
        avg = total /3;
        cout<<"Three subjects marks : "<<m1<<" "<<m2<<" "<<m3<<endl;
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks : "<<avg<<endl;
    }
};
int main(){
    Marks m1;
    m1.readData();
    m1.readMarks();
    m1.displayData();
    m1.displayTotAvgMarks();
}