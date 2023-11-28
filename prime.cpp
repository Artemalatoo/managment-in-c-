code
#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    std::cout << "Enter a positive number N: ";
    std::cin >> N;

    // Find the next prime number greater than N
    int nextPrime = N + 1;

    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    std::cout << "Next prime number greater than " << N << ": " << nextPrime << "\n";

    return 0;
}
