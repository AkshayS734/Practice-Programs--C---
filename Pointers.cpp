#include <iostream>
using namespace std;
class STUDENT{
    private:
    string Name;
    int Age;
    double Grade;
    public:
    STUDENT(string name, int age, double grade){
        Name = name;
        Age = age;
        Grade = grade;
    }
    string getname(){
        return Name;
    }
    int getage(){
        return Age;
    }
    double getgrade(){
        return Grade;
    }
};
int main(){
    string Name;
    int Age;
    double Grade;
    cout<<"Enter name : ";
    cin>> Name;
    cout<<"Enter age : ";
    cin>> Age;
    cout<<"Enter grade : ";
    cin>>Grade;
    STUDENT* Pstd;
    STUDENT std1(Name, Age, Grade);
    Pstd = &std1;
    cout<<"Name: "<<Pstd->getname()<<endl;
    cout<<"Age: "<<Pstd->getage()<<endl;
    cout<<"Grade: "<<Pstd->getgrade()<<endl;
}