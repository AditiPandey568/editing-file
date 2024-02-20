#include <iostream>

int main() {
    // Declare variables to store the numbers
    int n1, n2;
    
    // Prompt the user to enter the first number
    std::cout << "Enter the n1  number: ";
    std::cin >> n1;
    
    // Prompt the user to enter the second number
    std::cout << "Enter the n2 number: ";
    std::cin >> n2;
    
    // Calculate the sum of the n1 :`and n2 numbers
    int sum = n1 + n2;
    
    // Print the result
    std::cout << "The sum of " << n1 << " and " << n2 << " is: " << sum << std::endl;
    
    return 0;
}

