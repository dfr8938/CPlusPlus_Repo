#include <iostream>
#include <string>
#include <cstddef>
#include <limits>

int main(int argc, char* argv[]) {

    unsigned long long ull = 255;

    std::cout << "ull = " << +ull << std::endl;
    std::cout << "syzeof(ull) = " << +sizeof(ull) << std::endl;
    std::cout << "unsigned long long min = " << std::numeric_limits<unsigned long long>::min() << std::endl; 
    std::cout << "unsigned long long max = " << std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << std::endl;

    signed long long sll = -255;

    std::cout << "sll = " << +sll << std::endl;
    std::cout << "syzeof(sll) = " << +sizeof(sll) << std::endl;
    std::cout << "signed long long min = " << std::numeric_limits<signed long long>::min() << std::endl; 
    std::cout << "signed long long max = " << std::numeric_limits<signed long long>::max() << std::endl;
    std::cout << std::endl;

    long long ll = 255;

    std::cout << "ll = " << +ll << std::endl;
    std::cout << "syzeof(ll) = " << +sizeof(ll) << std::endl;
    std::cout << "long long min = " << std::numeric_limits<long long>::min() << std::endl; 
    std::cout << "long long max = " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << std::endl;

    return 0;
}