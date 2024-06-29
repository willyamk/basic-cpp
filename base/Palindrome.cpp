/**
 * Created by William Amiko on 29/06/2024.
 **/

#include <iostream>
#include <string>
#include "../function.h"  // Custom header file for additional functions

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& value) {
    // Iterative approach to check palindrome
    std::string::size_type left = 0;
    std::string::size_type right = value.length() - 1;

    while (left < right) {
        if (std::toupper(value[left]) != std::toupper(value[right])) {
            return false;  // Return false if characters at left and right indices do not match
        }
        ++left;
        --right;
    }

    return true;  // Return true if all characters match, indicating the string is a palindrome

    // Alternative approaches (commented out):
    // Iterative using std::equal and reverse iterators
    // return std::equal(value.begin(), value.end(), value.rbegin());

    // Recursive approach (commented out):
    /*
    if (value.length() <= 1) {
        return true;  // Base case: empty string or single character is a palindrome
    }

    if (value.front() != value.back()) {
        return false;  // Return false if first and last characters do not match
    }

    return isPalindrome(value.substr(1, value.length() - 2));  // Recursive call for substring excluding first and last character
    */
}

// Function to handle palindrome checking and user interaction
void palindrome() {
    bool exitProgram = false;

    while (!exitProgram) {
        std::string input;

        while (input.empty()) {
            std::cout << "Enter a string: ";
            std::getline(std::cin, input);
        }

        // Check if input string is a palindrome using isPalindrome function
        if (isPalindrome(input)) {
            std::cout << "\"" << input << "\" is a palindrome." << std::endl;
        } else {
            std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
        }

        // Handle user choice to continue or exit
        exitProgram = !handleUserChoice();  // Assuming handleUserChoice() determines user's continuation choice
    }

    std::cout << "Palindrome exited. Goodbye!" << std::endl;
}
