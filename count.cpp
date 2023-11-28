
#include <iostream>

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    int number, evens = 0, odds = 0;

    std::cout << "Enter " << N << " numbers:\n";

    for (int i = 0; i < N; ++i) {
        std::cin >> number;

        if (number % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    std::cout << "Odds: " << odds << "\n";
    std::cout << "Evens: " << evens << "\n";

    return 0;
}
