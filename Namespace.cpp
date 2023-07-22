#include <iostream>
namespace example_namespace {
    class ExampleClass {
        private:
        int num;
        public:
        ExampleClass(std::istream &stream){
            stream>>num;
            std::cout<<"Value: "<<num*num*num<<std::endl;
        }
    };
}
int main(){
    example_namespace::ExampleClass example(std::cin);
    return 0;
}