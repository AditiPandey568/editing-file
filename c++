#include <iostream>

int main() {
    // Declare variables to store the numbers
    int nu1, nu2;
    
    // Prompt the user to enter the first number
    std::cout << "Enter the nu1  number: ";
    std::cin >> nu1;
    
    // Prompt the user to enter the second number
    std::cout << "Enter the nu2 number: ";
    std::cin >> nu2;
    
    // Calculate the sum of the n1 :`and n2 numbers
    int sum = nu1 + nu2;
    
    // Print the result
    std::cout << "The sum of nu1+nu2 " << sum << std::endl;
    
    return 0;
}

