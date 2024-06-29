/**
* Created by William Amiko on 29/06/2024.
 **/

#include <iostream>
#include <limits>
#include "../function.h"  // Custom header file for additional functions

// Function to handle user's reset or exit choice
bool handleUserChoice() {
    char choice;
    std::cout << "Do you want to reset (r) or exit (e)? ";
    std::cin >> choice;

    switch (choice) {
        case 'r':
        case 'R':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore remaining input
        return true;  // Return true to indicate reset choice

        case 'e':
        case 'E':
            return false;  // Return false to indicate exit choice

        default:
            std::cout << "Invalid choice. Exiting program." << std::endl;
        return false;  // Return false for any invalid input
    }
}
