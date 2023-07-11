#include<iostream>
using namespace std;
int main() {
    try {
        int a, b;
        cout << "Enter two integer values: ";
        cin >> a >> b;
        try{
            if(b==0){
                throw b; 
            }
            else {
                cout<<a/b<<endl;
            }
        }
        catch(...) {
            throw;
        }
    }
    catch(int) {
        cout << "Second value cannot be zero"<< endl;
    }
    return 0;
}