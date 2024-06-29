/**
* Created by William Amiko on 29/06/2024.
 **/

#include <iostream>
#include <sstream>
#include <string>
#include "../function.h"  // Custom header file for additional functions

// Function to implement the FizzBuzz game with user interaction
void fizzBuzz() {
    bool exitProgram = false;

    while (!exitProgram) {
        int num = 0;
        std::string input;

        // Loop to ensure valid input of a positive number
        while (true) {
            std::cout << "Enter the number: ";
            std::getline(std::cin, input);

            std::stringstream ss(input);
            if (ss >> num && ss.eof() && num > 0) {
                break;  // Break loop if valid input is received
            }

            std::cout << "Invalid input. Please enter a valid positive number." << std::endl;
        }

        // Loop from 1 to num to perform FizzBuzz evaluation
        for (int i = 1; i <= num; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                std::cout << i << " = FizzBuzz\n";
            } else if (i % 3 == 0) {
                std::cout << i << " = Fizz\n";
            } else if (i % 5 == 0) {
                std::cout << i << " = Buzz\n";
            } else {
                std::cout << i << '\n';
            }
        }

        // Handle user choice to continue or exit
        exitProgram = !handleUserChoice();  // Assuming handleUserChoice() determines user's continuation choice
    }

    std::cout << "FizzBuzz exited. Goodbye!" << std::endl;
}
