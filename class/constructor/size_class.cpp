#include <iostream>

class MyClass {
    int myNum;
    char myChar;
};

int main() {
    std::cout << "Size of MyClass: " << sizeof(MyClass) << " bytes" << std::endl;
    return 0;
}
