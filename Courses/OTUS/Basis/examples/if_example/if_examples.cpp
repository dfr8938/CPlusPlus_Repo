#include <iostream>
#include <string>

void basic() {

    std::cout << "basic example" << std::endl;

    int ivalue = 42;
    if(ivalue) { // true
        std::cout << "first if" << std::endl;
    }

    bool condition = false;
    if(condition) { // false
        std::cout << "second if" << std::endl;
    }

    if(condition && ivalue) { // false
        std::cout << "third if" << std::endl;
    }

    if(condition || ivalue) { // true
        std::cout << "fourth if" << std::endl;
    }
}

void variables() {

    std::cout << "variables example" << std::endl;

    bool condition = true;

    if(condition) { // true
        int someVariable = 42;
        std::cout << "first if" << std::endl;
        if(someVariable) { // true
            std::cout << "nested if. someVariable = " << +someVariable << std::endl;
        } else {
            std::cout << "nested else" << std::endl;
        }
    } else {
        std::cout << "first else" << std::endl;
    }
}

void cpp17() {

    std::cout << "cpp17 example" << std::endl;

    bool condition = true;

    if(int someVariable = 42; condition) {
        std::cout << "first if" << std::endl;
    } else {
        std::cout << "first else" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    
    basic();
    variables();
    cpp17();

    return 0;
}
