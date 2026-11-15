#include <iostream>
#include "tinykv/version.hpp"

int main() {
    std::cout << "tinykv " << tinykv::version() << '\n';
}