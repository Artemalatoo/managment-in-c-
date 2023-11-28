#include <iostream>

int main() {
    int A, B, N;
    std::cout << "Enter the cost of a pie in som (A): ";
    std::cin >> A;

    std::cout << "Enter the cost of a pie in tyiyn (B): ";
    std::cin >> B;

    std::cout << "Enter the number of pies to purchase (N): ";
    std::cin >> N;

    // Calculate total cost in tyiyn
    int totalTyiyn = (A * 100 + B) * N;

    // Calculate som and tyiyn
    int totalSom = totalTyiyn / 100;
    int remainingTyiyn = totalTyiyn % 100;

    // Output the result
    std::cout << "Total cost: " << totalSom << " som " << remainingTyiyn << " tyiyn\n";

    return 0;
}
