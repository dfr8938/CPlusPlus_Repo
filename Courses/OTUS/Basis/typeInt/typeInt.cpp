#include <iostream>
#include <string>
#include <cstddef>
#include <limits>

int main(int argc, char* argv[]) {

    unsigned int ui = 32000;

    std::cout << "ui = " << +ui << std::endl;
    std::cout << "sizeof(ui) = " << +sizeof(ui) << std::endl;
    std::cout << "unsigned int min = " << +std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "unsigned int max = " << +std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << std::endl;

    signed int si = 32000;

    std::cout << "si = " << +si << std::endl;
    std::cout << "sizeof(si) = " << +sizeof(si) << std::endl;
    std::cout << "signed int min = " << +std::numeric_limits<signed int>::min() << std::endl;
    std::cout << "signed int max = " << +std::numeric_limits<signed int>::max() << std::endl;
    std::cout << std::endl;

    int i = 32000;

    std::cout << "i = " << +i << std::endl;
    std::cout << "sizeof(ui) = " << sizeof(i) << std::endl;
    std::cout << "int min = " << +std::numeric_limits<int>::min() << std::endl;
    std::cout << "int max = " << +std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;

    return 0;

}    