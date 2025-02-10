#include <iostream>
#include <limits>
#include <sstream>

void print_codes() {
    std::cout << "a - z\n";
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        std::cout << ch << " " << static_cast<int>(ch) << "; ";
    }

    std::cout << "\n\n0-9\n";
    for (char ch = '0'; ch <= '9'; ++ch) {
        std::cout << ch << " " << static_cast<int>(ch) << "; ";
    }

    std::cout << "\n\nall chars\n";
    typedef std::numeric_limits<char> lim;
    for (char ch = static_cast<int>(lim::min()); ch < static_cast<int>(lim::max()); ++ch) {
        std::cout << ch << " " << static_cast<int>(ch) << "; ";
    }
}

int main() {
    std::cout << "DECIMAL\n";
    print_codes();
    std::cout << "\n\nHEX\n" << std::hex;
    print_codes();
}