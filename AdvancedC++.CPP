#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For toupper() function

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
            tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

// Function to reverse a string
std::string Reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isspace(c)) {
            capitalize = true;
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        }
    }
    return result;
}

int main() {
    // Open the file
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 0;
    }

    // Read the contents of the file into fileData
    std::string fileData;
    std::getline(file, fileData);
    file.close(); // Close the file

    // Calculate and output the number of vowels
    std::cout << "Number of vowels: " << countVowels(fileData) << std::endl;

    // Calculate and output the number of words
    std::cout << "Number of words: " << countWords(fileData) << std::endl;

    // Output the reverse of the statement
    std::cout << "Reversed statement: " << Reverse(fileData) << std::endl;

    // Capitalize the second letter of each word and output
    std::cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}

