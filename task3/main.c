#include <stdio.h>

long long countNumbers(int r) {
     // Initialize a variable to store the number of numbers
     long long count = 1;

     // Initialize the variables to store the number of possible digits in each position
     long long prevCount = 1;
     long long prevPrevCount = 0;

     // Go through each position of the number
     for (int i = 2; i <= r; i++) {
         // Calculate the number of possible digits at the current position
         long long currCount = prevCount + prevPrevCount;

         // Add the number of possible digits at the current position to the total number of digits
         count += currCount;

         // Update the values of the variables for the next iteration
         prevPrevCount = prevCount;
         prevCount = currCount;
     }

     return count;
}

int main() {
     int r;

     printf("Enter the number of digits (p ≤ 30): ");
     scanf("%d", &r);

     // Call the countNumbers() function and get the number of numbers
     long long result = countNumbers(r);

     printf("Number of numbers with %d digits: %lld\n", r, result);

     return 0;
}
