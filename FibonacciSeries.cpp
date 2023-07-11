#include <iostream>
using namespace std;
class FIB{
    int N;
    public:
    FIB(){
        cout<<"No.of terms: ";
        cin>>N;
    }
    int CALCULATE(int N){
        if(N==0){
            return 0;
        }
        else if(N==1||N==2){
            return 1;
        }
        return CALCULATE(N-1)+CALCULATE(N-2);
    }
    int DISPLAY(){
        for(int i = 0 ; i < N ; i++){
            cout<<CALCULATE(i)<<" ";
        }cout<<endl;
    }
};
int main (){
    FIB NEW;
    NEW.DISPLAY();
    return 0;
}