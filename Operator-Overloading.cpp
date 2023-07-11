#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex(){
        real=0;imag=0;
    }
    complex(int Real,int Imag){
        real=Real;imag=Imag;
        }
        complex operator -(complex c){
            complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
        void showdata(){
            cout<<"Subtraction of two complex numbers : "<<real<<" + i"<<imag<<endl;
        }
};
int main(){
    int r1,i1,r2,i2;
    cout<<"Enter real and imaginary parts : ";
    cin>>r1>>i1;
    cout<<"Enter real and imaginary parts : ";
    cin>>r2>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);
    complex c3=c1-c2;
    c3.showdata();
}