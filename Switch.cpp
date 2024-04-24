#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // introduce the random number generator
    srand(static_cast<unsigned int>(time(0)));
	
	int n;
	std::cout << "Enter an integer Random Number N"<< std::endl;
	std::cin>> n; // This will get a user input random number N

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % n;

    // Introduce the switch statement cases to test the conditions for subscription expiration
    switch(daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << std::endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        default:
            std::cout << "You have an active subscription." << std::endl;
            break;
    }

    return 0;
}
