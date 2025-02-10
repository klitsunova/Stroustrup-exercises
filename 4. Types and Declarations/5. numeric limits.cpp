#include <iostream>
#include <limits>

template <typename T>
void get_limits() {
    std::cout << typeid(T).name() << std::endl;
    std::cout << "min: " << std::numeric_limits<T>::min() << std::endl;
    std::cout << "max: " << std::numeric_limits<T>::max() << std::endl << std::endl;
}

int main() {
    get_limits<char>();
    get_limits<short>();
    get_limits<int>();
    get_limits<long>();
    get_limits<float>();
    get_limits<double>();
    get_limits<long double>();
    get_limits<unsigned char>();
    get_limits<unsigned short>();
    get_limits<unsigned int>();
    get_limits<unsigned long>();
}