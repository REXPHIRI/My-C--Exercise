#include <iostream>

int main() {
    int userValue;

    // Prompt the user for an integer value between 5 and 10
    while (true) {
        std::cout << "Enter an integer value between 5 and 10: ";
        std::cin >> userValue;

        // Check if the input is valid
        if (userValue >= 5 && userValue <= 10) {
            std::cout << "Input value " << userValue << " has been accepted." << std::endl;
            break; // Exit the loop if the value is within the valid range
        }   
        else if (userValue < 5 || userValue > 10) { // Corrected the condition
            std::cout << "Sorry, you entered an invalid number. Please try again." << std::endl;
        } 
        else {
            std::cout << "You entered " << userValue << ". Please enter a number between 5 and 10." << std::endl;
        }
    }

    // Inform the user that their input value has been accepted

    return 0;
}
