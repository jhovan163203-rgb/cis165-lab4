#include <iostream>

int main() {
    const double RISE_RATE_PER_YEAR = 1.5;

    const int YEARS_5 = 5;
    const int YEARS_7 = 7;
    const int YEARS_10 = 10;

    double rise_5_years = RISE_RATE_PER_YEAR * YEARS_5;
    double rise_7_years = RISE_RATE_PER_YEAR * YEARS_7;
    double rise_10_years = RISE_RATE_PER_YEAR * YEARS_10;

    std::cout << "In 5 years the ocean will rise by " << rise_5_years << " millimeters." << std::endl;
    std::cout << "In 7 years the ocean will rise by " << rise_7_years << " millimeters." << std::endl;
    std::cout << "In 10 years the ocean will rise by " << rise_10_years << " millimeters." << std::endl;

    return 0;
    
}
