#include <string>

int main () {
    char c = 'a';
    char* c_pointer = &c;

    int array[10];
    int& array_start = array[0];

    std::string lines[] = {"first line", "second line"};
    std::string* lines_pointer = lines; // == &lines[0]
    
    
    char** double_pointer = &c_pointer;


    const int pi = 3.14;
    const int* pi_pointer = &pi;

    int a = 10;
    int* const pi_two = &a;
}