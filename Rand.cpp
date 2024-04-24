#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
	
int  x;
std::cout << "Enter an Integer random Number!!?" <<std::endl;
std::cin >> x; // get a user unput random number

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % x;

    // Output message based on conditions
    if (daysUntilExpiration <= 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration <= 1) {
        std::cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else if (daysUntilExpiration > 10) {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}

