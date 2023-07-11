#include<iostream>
using namespace std;
class wall{ 
    private: 
    float length; 
    float breadth; 
    float ar; 
    public: 
    wall (float len,float bret){
         length = len ; breadth = bret; 
         } 
    void area() { 
        ar = length*breadth; 
        }
        void display( ) {
            cout<<"Area = "<<ar<<endl;
            }
};
int main(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    wall c(l,b); 
    c.area();
    c.display();
 return 0;
}