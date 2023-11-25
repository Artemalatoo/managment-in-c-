// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
int main() {
    int A, B, N;
    cin >> A >> B >> N;

    int total_som = (A * N) + ((B * N) / 100);
    int total_tyiyn = (B * N) % 100;

    cout << total_som << " som and " << total_tyiyn << " tyiyn\n";

    return 0;
}
