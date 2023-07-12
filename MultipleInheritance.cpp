#include <iostream>
using namespace std;
class Internals {
    protected :
    float i1,i2,i3;
    public:
    void readInternals(){
        cout<<"Enter internal marks of 3 subjects : ";
        cin>>i1>>i2>>i3;
    }
};
class Externals {
    protected : 
    float e1,e2,e3;
    public:
    void readExternals(){
        cout<<"Enter external marks of 3 subjects : ";
        cin>>e1>>e2>>e3;
    }
};
class Result : public Internals, public Externals {
    private:
    float s1, s2, s3, tot, avg;
    public:
    void displayTotAvg(){
        s1=i1+e1;
        s2=i2+e2;
        s3=i3+e3;
        tot=s1+s2+s3;
        avg=tot/3;
        cout<<"Three subject totals : "
        <<s1 <<" "<<s2<<" "<<s3<<endl
        <<"Total marks : "<<tot<<endl
        <<"Average marks : " <<avg<<endl;
    }
};
int main() {
    Result r;
    r.readInternals();
    r.readExternals();
    r.displayTotAvg();
    return 0;
}