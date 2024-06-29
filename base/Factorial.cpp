/**
 * Created by William Amiko on 29/06/2024.
 **/

#include <iostream>
#include <limits>
#include <vector>
#include "../function.h"  // Custom header file for additional functions

// Define a class BigInteger to handle large integer computations
class BigInteger {
private:
    std::vector<int> digits;  // Vector to store individual digits of the number

public:
    BigInteger();  // Constructor to initialize with a single digit '1'
    void multiply(int num);  // Method to multiply the BigInteger by an integer
    friend std::ostream& operator<<(std::ostream& os, const BigInteger& bigint);  // Overloaded output stream operator to print BigInteger
};

// Constructor initializes the BigInteger with a single digit '1'
BigInteger::BigInteger() {
    digits.push_back(1);
}

// Method to multiply the BigInteger by an integer 'num'
void BigInteger::multiply(int num) {
    int carry = 0;
    for (int & digit : digits) {
        int product = digit * num + carry;
        digit = product % 10;  // Update the current digit
        carry = product / 10;  // Calculate the carry for the next digit
    }

    // Handle remaining carry if any
    while (carry) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
}

// Overloaded output stream operator to print BigInteger
std::ostream& operator<<(std::ostream& os, const BigInteger& bigint) {
    for (int i = bigint.digits.size() - 1; i >= 0; --i) {
        os << bigint.digits[i];  // Print digits in reverse order (from most significant to least significant)
    }
    return os;
}

// Function to calculate factorial using BigInteger
BigInteger calculateFactorial(int num) {
    if (num < 0) {
        return {};  // Return an empty BigInteger for negative input
    }

    BigInteger result;  // Initialize result with 1 (default constructor behavior)
    for (int i = 2; i <= num; ++i) {
        result.multiply(i);  // Multiply result by each integer from 2 to num
    }
    return result;  // Return the computed factorial as a BigInteger
}

// Function to handle factorial computation and user interaction
void factorial() {
    bool exitProgram = false;

    while (!exitProgram) {
        int input;

        std::cout << "Enter an integer (0 to exit): ";
        std::cin >> input;

        if (input == 0) {
            exitProgram = true;  // Exit program if input is 0
            continue;
        }

        if (input < 0) {
            std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
            std::cin.clear();  // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore remaining input
            continue;
        }

        // Calculate and print factorial for valid input
        std::cout << "Factorial of " << input << " is " << calculateFactorial(input) << std::endl;

        // Handle user choice to continue or exit
        exitProgram = !handleUserChoice();  // Assuming handleUserChoice() determines user's continuation choice
    }

    std::cout << "Factorial exited. Goodbye!" << std::endl;
}
