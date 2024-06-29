#include <iostream>

// Function prototypes
void fizzBuzz();
void palindrome();
void factorial();
void primeNumber();

int main() {
    int choice;

    // Main menu loop
    do {
        std::cout << "========== Choose Function to Execute ==========" << std::endl;
        std::cout << "1. FizzBuzz" << std::endl;
        std::cout << "2. Palindrome" << std::endl;
        std::cout << "3. Factorial" << std::endl;
        std::cout << "4. PrimeNumber" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice (0-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "========================  FIZZ BUZZ  ========================" << std::endl;
            fizzBuzz();
            break;

            case 2:
                std::cout << "======================== PALINDROME  ========================" << std::endl;
            palindrome();
            break;

            case 3:
                std::cout << "========================  FACTORIAL  ========================" << std::endl;
            factorial();
            break;

            case 4:
                std::cout << "=======================  PRIME NUMBER  =======================" << std::endl;
            primeNumber();
            break;

            case 0:
                std::cout << "Thank you. Exiting the program." << std::endl;
            break;

            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
