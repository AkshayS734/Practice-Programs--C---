#include <iostream>
#include <string.h>
using namespace std;
class student {
    int roll;
    string name;
    public:
    student(int Roll, string Name);
    student(student& a){
        roll = a.roll;
        name = a.name;
        }
        void display();
};
student::student(int Roll, string Name){
    roll = Roll;
    name = Name;
}
void student::display(){
    cout<<roll<<" "<<name<<endl;
}
int main(){
    int rno;
    string name;
    cout<<"Enter roll number: ";
    cin>>rno;cout<<"Enter student name: ";
    cin>>name;
    student s1(rno,name);
    student s2(s1);
    s1.display();
    s2.display();
    return 0;
}