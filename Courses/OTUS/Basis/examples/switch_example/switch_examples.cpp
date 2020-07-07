#include <iostream>
#include <string>

void basic_example() {

    std::cout << "basic example" << std::endl;

    int code = 3;

    switch (code)
    {
    case 0:
        std::cout << "code = 0" << std:: endl;
        break;
    case 1:
        std::cout << "code = 1" << std:: endl;
        break;
    case 2:
        std::cout << "code = 2" << std::endl;
        break;
    case 3:
        std::cout << "code = 3" << std::endl;
        break;  
    default:
        std::cout << "default case" << std::endl;
        break;
    }
}

void cpp17() {

    std::cout << "cpp17 example" << std::endl;

    int code = 3;

    switch (int someVariable = 42; code)
    {
    case 0:
        std::cout << "code = 0" << std:: endl;
        break;
    case 1:
        std::cout << "code = 1" << std:: endl;
        break;
    case 2:
        std::cout << "code = 2" << std::endl;
        break;
    case 3:
        std::cout << "code = 3 and someVariable = " << +someVariable << std::endl;
        break;  
    default:
        std::cout << "default case" << std::endl;
        break;
    }
}

int main(int argc, char* argv[])
{
    basic_example();
    cpp17();
    
    return 0;
}
