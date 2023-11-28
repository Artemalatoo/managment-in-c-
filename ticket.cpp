code
#include <iostream>
using namespace std;
int main() {
    int ticketNumber;
    cout << "Enter the six-digit ticket number: ";
    cin >> ticketNumber;

    // Extracting digits
    int digit6 = ticketNumber % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit1 = ticketNumber / 100000;

    // Checking if the ticket is lucky
    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
