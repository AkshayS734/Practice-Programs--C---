#include <iostream>
using namespace std;
class ONE {
    private:
    int a;
    protected:
    int b;
    public:
    ONE(int x,int y){
        a=x;b=y;
    }
    friend class TWO;
};
class TWO {
    public:
    void display(ONE t){
        cout<<"The value of Private Variable = "<< t.a<<endl;
        cout<<"The value of Protected Variable = "<< t.b<<endl;
    }
};
int main(){
    int a,b;
    cout<<"Enter private variable : ";
    cin>>a;
    cout<<"Enter protected variable : ";
    cin>>b;
    ONE t1(a,b);
    TWO t2;
    t2.display(t1);
}