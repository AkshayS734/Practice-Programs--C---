#include<iostream>
using namespace std;
class square{
    private:
    int side;
    public:
    int area(){
        return side*side;
    }
    friend class rectangle;
};
class rectangle{
    public:
    void setSide(square& x){
        int side;
        cin>>side;
        x.side = side;
    }
    void result (square& x){
        cout<<"Area of rectangle: "<<x.area()<<endl;
    }
};
int main(){
    square s;
    rectangle r;
    r.setSide(s);
    r.result(s);
}