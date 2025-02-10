#include <iostream>

// sizeof - size in bytes

enum weekdays {mon, tue, wed, thu, fri};
enum weekends {sat, sun};
enum colors {red, green, blue};
enum only {one};
enum months {January, February, March, April, May, June, July, August, September, October, November, December};

struct Integer{int num; };
struct Date{int d, m, y; };
struct Double{double num; };
struct Complex{double re, im; };

int main() {
    std::cout << "Fundamental types\n";
    std::cout << "int: " << sizeof(int) << std::endl
                << "short: " << sizeof(short) << std::endl
                << "long: " << sizeof(long) << std::endl
                << "long long: " << sizeof(long long) << std::endl
                << "bool: " << sizeof(bool) << std::endl
                << "char: " << sizeof(char) << std::endl
                << "float: " << sizeof(float) << std::endl
                << "double: " << sizeof(double) << std::endl
                << "long double: " << sizeof(long double) << std::endl << std::endl;
    
    std::cout << "Pointers\n";
    std::cout << "int: " << sizeof(int*) << std::endl
                << "short: " << sizeof(short*) << std::endl
                << "long: " << sizeof(long*) << std::endl
                << "long long: " << sizeof(long long*) << std::endl
                << "bool: " << sizeof(bool*) << std::endl
                << "char: " << sizeof(char*) << std::endl
                << "float: " << sizeof(float*) << std::endl
                << "double: " << sizeof(double*) << std::endl
                << "long double: " << sizeof(long double*) << std::endl
                << "nullprt: " << sizeof(nullptr) << std::endl << std::endl;

    std::cout << "Enums\n";
    std::cout << "weekdays: " << sizeof(weekdays) << std::endl
                << "weekends: " << sizeof(weekends) << std::endl
                << "colors: " << sizeof(colors) << std::endl
                << "only: " << sizeof(only) << std::endl
                << "months: " << sizeof(months) << std::endl << std::endl;

    std::cout << "Structures\n";
    std::cout << "Integer: " << sizeof(Integer) << std::endl
                << "Date: " << sizeof(Date) << std::endl
                << "Double: " << sizeof(Double) << std::endl
                << "Complex: " << sizeof(Complex) << std::endl;                        
    return 0;
}