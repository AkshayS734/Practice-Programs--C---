#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
char add(char a, char b){
    return a+b;
}
int main() {
    int a, b;
    float c, d;
    char p, q;
    cout << "Enter two integer values : ";
    cin >> a >> b;cout << "Enter two float values : ";
    cin >> c >> d;
    cout << "Enter two char values : ";
    cin >> p >> q;cout << "Sum of two integers : " << add(a, b) << endl;
    cout << "Sum of two floats : " << add(c, d) << endl;
    cout << "Sum of two characters : " << add(p, q) << endl;
}