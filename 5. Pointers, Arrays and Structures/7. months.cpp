#include <iostream>

struct Month {
    std::string name;
    int days;
};

int main () {
    std::cout << "arrays\n:";
    char* months[] = {"January",
                    "February",
                    "March",
                    "April",
                    "May",
                    "June", 
                    "July", 
                    "August",
                    "September",
                    "October",
                    "Novermber",
                    "December"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (size_t i = 0; i < 12; ++i) {
        std::cout << months[i] << ", " << days[i] << "\n";
    }

    std::cout << "\nstructures:\n";
    Month months_structures[] = {{"January", 31}, 
                                {"February", 28},
                                {"March", 31},
                                {"April", 30},
                                {"May", 31},
                                {"June", 30},
                                {"July", 31},
                                {"August", 31},
                                {"September", 30},
                                {"October", 31},
                                {"Novermber", 30},
                                {"December", 31}};
    for (const auto& month : months_structures) {
        std::cout << month.name << ", " << month.days << "\n";
    }

}