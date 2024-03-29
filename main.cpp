#include <iostream>
#include <algorithm>
#include <conio.h> // Для использования _getch()

int main() {
    std::string input;
    int numbers[4];

    // Request a string of 4 digits without spaces from the user
    std::cout << "Enter 4 single-digit numbers without spaces:\n";
    std::cin >> input;

    // Validate the input and convert it to integer array
    if (input.length() != 4) {
        std::cout << "Invalid input. Please enter exactly 4 digits.\n";
        return 1;
    }
    for (int i = 0; i < 4; i++) {
        numbers[i] = input[i] - '0';
        if (numbers[i] < 1 || numbers[i] > 9) {
            std::cout << "Number must be from 1 to 9. Please try again.\n";
            return 1;
        }
    }

    // Create and display all number combinations
    do {
        for (int i = 0; i < 4; i++) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(numbers, numbers + 4));

    // Wait for a key press before exiting
    std::cout << "Press any key to exit...\n";
    _getch();

    return 0;
}