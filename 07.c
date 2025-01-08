#include<stdio.h>
#include<math.h>

// Function to find the number of digits in the number
int len(int n) {
    int l = 0;
    while (n > 0) {
        n = n / 10;
        l++;
    }
    return l;
}

// Function to check if a number is Armstrong
int armn(int n) {
    int sum = 0, r = 0;
    int m = len(n); // Calculate number of digits once before modifying n
    
    while (n > 0) {
        r = n % 10; // Get the last digit
        sum += (int)pow(r, m); // Raise it to the power of number of digits
        n = n / 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Check if the sum of digits raised to the power of number of digits equals the original number
    if (armn(n) == n) {
        printf("This is an Armstrong number.\n");
    } else {
        printf("This is not an Armstrong number.\n");
    }
    
    return 0;
}
