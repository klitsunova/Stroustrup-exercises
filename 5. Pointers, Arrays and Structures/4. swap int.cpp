#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int* a = new int(5);
    int* b = new int(7);
    std::cout << "a = " << *a << " b = " << *b << "\n";
    swap(a, b);
    std::cout << "swap\n";
    std::cout << "a = " << *a << " b = " << *b << "\n";

    int a_2 = 5;
    int b_2 = 7;
    std::cout << "a = " << a_2 << " b = " << b_2 << "\n";
    swap(a_2, b_2);
    std::cout << "swap\n";
    std::cout << "a = " << a_2 << " b = " << b_2 << "\n";

    
}