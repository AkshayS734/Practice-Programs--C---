//replacing a line in a file
#include<iostream>
#include<fstream>
void replaceLine(const char *filename, const unsigned int lineNo, const char *data){
    std::string line_data;
    unsigned int lines = 0;
    std::fstream file(filename, std::ios::in);
    if(!file){
        std::cout<<"ERROR: unable to open file" <<std::endl;
        return;
    }
    while(true) {
        if(file.eof()){
            break;
        }
        std::getline(file, line_data);
        lines++;
        if(lines == lineNo){
            std::cout<<data<<std::endl;
        }
        else{
            std::cout<<line_data<<std::endl;
        }
    }
    file.close();
}
int main(){
    std::string file_name;
    unsigned int line_no;
    std::string data;
    std::cout<<"File name: ";
    std::cin>>file_name;
    std::cout<<"line No: ";
    std::cin>>line_no;
    std::cout<<"line text: ";
    std::cin.get();
    std::getline(std::cin, data);
    std::cout<<"newly modified file:"<<std::endl;
    replaceLine(file_name.c_str(), line_no, data.c_str());
    return 0;
}