#include <iostream>

int main() {
    // Declare variables to store the numbers
    int n1, n2;
    
    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> n1;
    
    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> n2;
    
    // Calculate the sum of the two numbers
    int sum = n1 + n2;
    
    // Print the result
    std::cout << "The sum of " << n1 << " and " << n2 << " is: " << sum << std::endl;
    
    return 0;
}

