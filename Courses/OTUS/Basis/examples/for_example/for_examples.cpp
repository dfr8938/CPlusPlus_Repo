#include <iostream>
#include <string>

void basic() {

    std::cout << "basic example" << std::endl;
    std::cout << std::endl;
    std::cout << "first cycle:" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 10; i++) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\nsecond cycle:" << std::endl;
    std::cout << std::endl;
    for (int i = 10; i >= 0; i--) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\nthird cycle:" << std::endl;
    std::cout << std::endl;
    for (int i = 10; i < 10; i++) {
        std::cout << "i = " << i << std::endl;
    }
    std::cout << std::endl; 

}

void advance() {

    std::cout << "advance example" << std::endl;

    std::cout << "first cycle:" << std::endl;
    std::cout << std::endl;

    const int size = 3;
    int matrix[size][size] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    for (int i = 0, j = size - 1; i < size; i++, j--) {
        std::cout << "matrix[" << i << "][" << j << "] = ";
        std::cout << matrix[i][j] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "second cycle:" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << "matrix[" << i << "][" << j << "] = ";
            std::cout << matrix[i][j] << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "third cycle:" << std::endl;
    std::cout << std::endl;

    const int n = 6;

    int arr[n] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i < n-1; i += 2) {
        std::cout << "arr[" << i << "] = " << i << std::endl;
    }
    std::cout << std::endl;
    
}

void breakEx() {

    std::cout << "break example" << std::endl;

    const int size = 10;
    bool found = false;
    int array[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int target = 6;

    for(int i = 0; i < size; i++) {
        if(array[i] == target) {
            found = true;
            break;
        }
    }
    if(found) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

}

int main(int argc, char* argv[]) {
    
    basic();
    advance();

    return 0;
}
