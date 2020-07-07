#include <iostream>
#include <limits>
#include <cstddef>

int main(int argc, char* argv[]) {

    unsigned char uc = 255;

    std::cout << "uc = " << +uc << std::endl;
    std::cout << "syzeof(uc) = " << +sizeof(uc) << std::endl;
    std::cout << "unsigned char min: " << +std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << "unsigned char max: " << +std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << std::endl;
    
    signed char sc = -15;

    std::cout << "sc = " << +sc << std::endl;
    std::cout << "syzeof(sc) = " << +sizeof(sc) << std::endl;
    std::cout << "signed char min: " << +std::numeric_limits<signed char>::min() << std::endl;
    std::cout << "signed char max: " << +std::numeric_limits<signed char>::max() << std::endl;
    std::cout << std::endl;

    char c = 97;

    std::cout << "c = " << +c << std::endl;
    std::cout << "syzeof(c) = " << +sizeof(c) << std::endl;
    std::cout << "char min: " << +std::numeric_limits<char>::min() << std::endl;
    std::cout << "char max: " << +std::numeric_limits<char>::max() << std::endl;
    std::cout << std::endl;

    return 0;

}