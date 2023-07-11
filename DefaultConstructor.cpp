#include <iostream>
using namespace std;
class Wall { 
    private:
    double length;
    double breadth;
    public:
    Wall() {
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the breadth: ";
        cin>>breadth;
        cout<<"Area = "<<length*breadth<<endl;
        }
    };
int main() {
    Wall wall1; 
    return 0;
}