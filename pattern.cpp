#include <iostream>

int main() {
    int N;
    std::cin >> N;

    // Print the upper half of the pattern
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            std::cout << " ";
        }

        // Print <
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "<";
        }

        // Print >
        std::cout << ">";

        std::cout << std::endl;
    }

    // Print the lower half of the pattern
    for (int i = N; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            std::cout << " ";
        }

        // Print >
        std::cout << ">";

        // Print <
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "<";
        }

        std::cout << std::endl;
    }

    return 0;
}
