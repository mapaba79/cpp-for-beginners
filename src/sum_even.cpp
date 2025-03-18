#include <iostream>

int main() {
    int n, sum = 0;

    // Ask for user input
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Calculate sum of even numbers
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    // Print the sum
    std::cout << "Sum fo even numbers from 2 to " << n << " is " << sum <<std::endl;
    return 0;
}