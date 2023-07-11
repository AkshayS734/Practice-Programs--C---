#include<iostream>
using namespace std;
#define subs 6
class STUDENT{
    string Sname;
    int Marks[subs],Tmax,i;
    float Total=0;
    public:
    void Assign(){
        cout<<"Enter Student Name: ";
        cin>>Sname;
        for(i=0;i<subs;i++){
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>Marks[i];
        }
        cout<<"Enter maximum total marks: ";
        cin>>Tmax;
    }
    float Compute(){
        for(i=0;i<subs;i++){
            Total+=Marks[i];
            }
        }
        void Display(){
            cout<<"Student Name: "<<Sname<<endl<<"Marks are"<<endl;
            for(i=0;i<subs;i++){
                cout<<"Subject "<<i+1<<" : "<<Marks[i]<<endl;
            }
            cout<<"Total: "<<Total<<endl;
            cout<<"Percentage: "<<Total/subs<<endl;
        }
};
int main(){
    STUDENT std1;
    std1.Assign();
    std1.Compute();
    std1.Display();
}