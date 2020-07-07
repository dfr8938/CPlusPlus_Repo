#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    std::string str("Hello World!");

    std::cout << "str = " << str << std::endl;
    std::cout << "length = " << str.length() << std::endl;
    std::cout << "[0..3] = " << str.substr(0, 3) << std::endl;
    std::cout << "str[5] = " << "\"" << str[5] << "\"" << std::endl;
    std::cout << "str is empty?\n" << std::boolalpha << str.empty() << std::endl;

    return 0;
}
