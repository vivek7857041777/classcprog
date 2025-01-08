#include <stdio.h>

int reverse_number(int num) {
    int reversed_num = 0;
    
    // Loop to reverse the digits of the number
    while (num != 0) {
        int digit = num % 10;          // Extract the last digit
        reversed_num = reversed_num * 10 + digit; // Update the reversed number
        num = num / 10;                // Remove the last digit from the number
    }
    
    return reversed_num;
}

int main() {
    int number;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the function to reverse the number
    int reversed_number = reverse_number(number);
    
    // Display the reversed number
    printf("Reversed number: %d\n", reversed_number);
    
    return 0;
}
