/**
 * Created by William Amiko on 29/06/2024.
 **/

#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include "../function.h"  // Custom header file for additional functions

// Function to check if a number is prime
bool isPrime(const int num) {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 up to square root of num
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;  // Return false if num is divisible by any integer from 2 to sqrt(num)
        }
    }

    return true;  // Return true if num is prime (not divisible by any integer from 2 to sqrt(num))
}

// Function to handle prime number computation and user interaction
void primeNumber() {
    bool exitProgram = false;

    while (!exitProgram) {
        int input;
        std::vector<int> primeNumbers;

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

        // Find all prime numbers up to input
        for (int i = 2; i <= input; ++i) {
            if (isPrime(i)) {
                primeNumbers.push_back(i);  // Store prime numbers in vector
            }
        }

        // Print the prime numbers found
        std::cout << "Prime numbers up to " << input << " are: ";
        for (size_t i = 0; i < primeNumbers.size(); ++i) {
            std::cout << primeNumbers[i];
            if (i != primeNumbers.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;

        // Handle user choice to continue or exit
        exitProgram = !handleUserChoice();  // Assuming handleUserChoice() determines user's continuation choice
    }

    std::cout << "PrimeNumber exited. Goodbye!" << std::endl;
}
