#include <iostream>
#include <string>

int main() {
    char str[] = "a short string";
    std::cout << sizeof(str) << "\n";
    std::string line = "a short string";
    std::cout << line.length();

}