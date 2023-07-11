#include <iostream>
using namespace std;
class Sample{
    private:
    int data;
    public:
    void getData(){
        cout<< "Enter first value : ";
        cin>> data;
    }
    void setData(int Data){
        data = Data;
    }
    friend int sampledemo(Sample& s);
};
class Test{
    private:
    int data;
    public:
    void getData(){
        cout<<"Enter second value : ";
        cin>>data;
    }
    void setData(int Data){
        data=Data;
    }
    friend int testdemo(Test& t);
};
int sampledemo(Sample& s){
    return s.data;
}
int testdemo(Test& t){
    return t.data;
}
void display(Sample &s,Test &t){
    cout<<sampledemo(s)<<" "<<testdemo(t)<<endl;
}
void swap(Sample& s, Test& t){
    int a,b;
    a= sampledemo(s);
    b= testdemo(t);
    s.setData(b);
    t.setData(a);
}
int main() {
    Sample s;
    Test t;
    s.getData();
    t.getData();
    cout << "Before swap the values are : ";
    display(s, t);
    swap(s, t);
    cout << "After swap the values are : ";
    display(s, t);
}