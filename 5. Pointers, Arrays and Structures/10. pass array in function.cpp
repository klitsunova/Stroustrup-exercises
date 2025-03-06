#include <iostream>
#include <string>

void print_months(const std::string months[], int num) {
    for (size_t i = 0; i < num; ++i) {
        std::cout << months[i] << "\n";
    }
}

int main() {
    std::string months[] = {"January", 
                            "February", 
                            "March", 
                            "April", 
                            "May", 
                            "June", 
                            "July", 
                            "August", 
                            "September", 
                            "October", 
                            "November", 
                            "December"};
    print_months(months, 12);

}