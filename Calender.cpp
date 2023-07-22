#include<iostream>
#include<iomanip>
#include<string>
void displayCalender(const unsigned short int start_day, const unsigned short int year){
    const std::string months[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    bool isLeap=((year%100)%4==0);
    std::string date;
    unsigned short int cnt = start_day;
    for(int i=1; i<=12; i++){
        std::cout<<months[i-1]<<" "<<year<<std::endl;
        std::cout << "Sunday Monday Tuesday Wednesday Thursday Friday Saturday "<<std::endl;
        for(int j=1; j<=31; j++) {
            for(int k=0; j==1 && k<cnt; k++) {
                if(i==1 && start_day == 0){
                    break;
                }
                std::cout<<std::left<<std::setfill(' ')<<std::setw(4)<<" ";
            }
            date= std::to_string(j);
            if(i==2 && !isLeap && j>29){
                break;
            }
            else if(i==2 && !isLeap && j>28){
                break;
            }
            else if(j>30 && ((i<7 && i%2 ==0 )|| (i>7 && i%2 !=0))){
                break;
            }
            std::cout<<std::left<<std::setfill(' ')<<std::setw(4)<<date;
            cnt++;if(cnt>=7) {
                cnt=0;
                if(j==30 && ((i>7 && i%2 !=0) || (i<7 && i%2 == 0))){
                    break;
                }
                else if(j==31){
                    break;
                }
                else{
                    std::cout<<std::endl;
                }
            }
        }
        std::cout<<std::endl<<std::endl;
    }
}
int main(){
    unsigned short int year, start_day;
    std::cout<<"Enter year: ";
    std::cin>>year;
    std::cout<<"Enter start day (0 = Sunday, 1 = Monday, ..., 6 = Saturday): ";
    std::cin>> start_day;
    displayCalender(start_day, year);
    return 0;
}