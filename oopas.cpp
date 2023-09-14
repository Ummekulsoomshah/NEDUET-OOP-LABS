#include <iostream>

int main() {
    int size = 5;  // Adjust the size as needed

    // Outer loop for rows
    for (int i = 0; i < size; i++) {
        // Inner loop for columns
        for (int j = 0; j < size; j++) {
            // Check if it's a "c" or "+"
            if (i == j || i == size - j - 1) {
                std::cout << "c";
            } else {
                std::cout << "+";
            }
        }
        std::cout << std::endl;  // Move to the next line after each row
    }

    return 0;
}
