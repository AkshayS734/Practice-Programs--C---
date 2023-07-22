#include<iostream>
using namespace std;
template<typename D>
class Numeric{
    private:
    D NUM1,NUM2;
    public:
    Numeric(D num1 , D num2){
        NUM1 = num1;
        NUM2 = num2;
    }
    D add(){
        return NUM1+NUM2;
    }
    D multiply(){
        return NUM1*NUM2;
    }
    D subtract(){
        return NUM1-NUM2;
    }
    D division(){
        return NUM1/NUM2;
    }
};
int main() {
    int num1, num2;
    float val1, val2;
    cout << "Enter 2 integer values : ";
    cin >> num1 >> num2;
    cout << "Enter 2 float values : ";
    cin >> val1 >> val2;
    Numeric<int> ob1(num1, num2);
    Numeric<float> ob2(val1, val2);
    cout << "Addition of 2 ints : " << ob1.add() << endl;
    cout << "Subtraction of 2 ints : " << ob1.subtract() << endl;
    cout << "Multiplication of 2 ints : " << ob1.multiply() << endl;
    cout << "Division of 2 ints : " << ob1.division() << endl;
    cout << "Addition of 2 floats : " << ob2.add() << endl;
    cout << "Subtraction of 2 floats : " << ob2.subtract() << endl;
    cout << "Multiplication of 2 floats : " << ob2.multiply() << endl;
    cout << "Division of 2 floats : " << ob2.division() << endl;
    return 0;
}