#include <iostream>
#include <string>
#include <limits>
#include <cstddef>

int main(int argc, char* argv[]) {

    float bad = 1/3;
    std::cout << "bad = " << +bad << std::endl;
    std::cout << std::endl;
    
    float f = 1.f/3;
    std::cout << "f = " << +f << std::endl;
    std::cout << std::endl;

    f = 97.002f;
    std::cout << "f = " << +f << std::endl;
    std::cout << "sizeof(f) = " << +sizeof(f) << std::endl;
    std::cout << "float min = " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "float max = " << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::endl;

    double d = 97.002;
    std::cout << "d = " << +d << std::endl;
    std::cout << "sizeof(d) = " << +sizeof(d) << std::endl;
    std::cout << "double min = " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "double max = " << std::numeric_limits<double>::max() << std::endl;
    std::cout << std::endl;

    long double ld = 97.002;
    std::cout << "ld = " << +ld << std::endl;
    std::cout << "sizeof(ld) = " << +sizeof(ld) << std::endl;
    std::cout << "long double min = " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "long double max = " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << std::endl;

    return 0;
}