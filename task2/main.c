
#include <stdio.h>

// A function for calculating the quotient of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// A function for calculating the quotient of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i;
    int numbers[20];
    int result;

    // Entering values of n and numbers in a series
    printf("Enter the number of numbers (n): ");
    scanf("%d", &n);

    printf("Enter numbers separated by spaces: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculation of the NSC of a series of numbers
    result = numbers[0];
    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    // Outputting the result
    printf("Least common multiple: %d\n", result);

    return 0;
}
