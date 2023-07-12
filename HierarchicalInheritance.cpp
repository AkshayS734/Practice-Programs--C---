#include<iostream>
using namespace std;
class Number {
    private:
    int num;
    public:
    void readNumber(){
        cout<<"Enter an integer number : ";
        cin>> num; 
    }
    int getNumber(){
        return num; 
    }
};
class Square : public Number {
    public:
    int getSquare(){
        int num = getNumber();
        return num*num;
    }
};
class Cube : public Number {
    public:
    int getCube(){
        int num = getNumber();
        return num*num*num;
    }
};
int main() {
    Square s;
    s.readNumber();
    cout << "The square of " << s.getNumber() << " is : " << s.getSquare() << endl;
    Cube c;
    c.readNumber();
    cout << "The cube of " << c.getNumber() << " is : " << c.getCube() << endl;
    return 0;
}