#include <iostream>

void f(char a) {
    std::cout << a; 
}

void g(char& a) {
    std::cout << a;
}

void h(const char& a) {
    std::cout << a;
}


int main() {
    char c = 'b';
    unsigned char uc = 'c';
    signed char sc = 'd';

    f('a');
    f(49);
    f(3300);
    f(c);
    f(uc);
    f(sc);


    // g('a'); initial value of reference to non-const must be an lvalue
    // g(49); initial value of reference to non-const must be an lvalue    
    // g(3300); initial value of reference to non-const must be an lvalue    
    g(c);    
    // g(uc); a reference of type char& cannot be initialized with unsigned char   
    // g(sc); a reference of type char& cannot be initialized with signed char    


    h('a'); // сreate temporary variable
    h(49); // сreate temporary variable
    h(3300); // сreate temporary variable
    h(c);
    h(uc);   
    h(sc);
}