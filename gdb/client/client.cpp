#include <iostream>

#include "../mylib/mylib.h"

int main() {
    std::cout << HelloRequest("Client!") << std::endl;
    int a = 1, b = 10;
    std::cout << "A + B : " << a + b << std::endl;

    return 1;
}