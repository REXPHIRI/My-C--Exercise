#include<iostream>

int main() {
    // Declare and initialize the array with the given elements
    std::string myArray[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element in the array
    for (const std::string& element : myArray) {
        // Check if the element starts with the letter "B"
        if (element[0] == 'B') {
            // Output the element to the console
            std::cout << element << std::endl;
        }
    }

    return 0;
}