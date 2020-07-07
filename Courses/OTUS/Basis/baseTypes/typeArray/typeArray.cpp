#include <iostream>
#include <string>
#include <cstddef>
#include <limits>

int main(int argc, char* argv[]) {
    
    int intArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "sizeof(intArray) = " << sizeof(intArray) << std::endl;
    std::cout << "intArray = " << +intArray << std::endl;

    std::cout << "intArray[0] = " << intArray[0] << std::endl;
    std::cout << "intArray[3] = " << intArray[3] << std::endl;
    std::cout << "intArray[6] = " << intArray[6] << std::endl;

    std::cout << std::endl;

    char badCharArray[] = {'H', 'e', 'l', 'l', 'o', '!'};

    std::cout << "sizeof(badCharArray) = " << sizeof(badCharArray) << std::endl;
    std::cout << "badCharArray = " << +badCharArray << std::endl;

    std::cout << "badCharArray[0] = " << badCharArray[0] << std::endl;
    std::cout << "badCharArray[3] = " << badCharArray[3] << std::endl;
    std::cout << "badCharArray[5] = " << badCharArray[5] << std::endl;

    std::cout << std::endl;

    char goodCharArray[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    std::cout << "sizeof(goodCharArray) = " << sizeof(goodCharArray) << std::endl;
    std::cout << "goodCharArray = " << +goodCharArray << std::endl;

    std::cout << "goodCharArray[0] = " << goodCharArray[0] << std::endl;
    std::cout << "goodCharArray[1] = " << goodCharArray[1] << std::endl;
    std::cout << "goodCharArray[2] = " << goodCharArray[2] << std::endl;
    std::cout << "goodCharArray[3] = " << goodCharArray[3] << std::endl;
    std::cout << "goodCharArray[4] = " << goodCharArray[4] << std::endl;
    std::cout << "goodCharArray[5] = " << goodCharArray[5] << std::endl;
    std::cout << "goodCharArray[6] = " << goodCharArray[6] << std::endl;

    std::cout << std::endl;

    return 0;
}
