#include <stdio.h>

int countEqualDivisors(int n) {
     int count = 0;
     int i;

     for (i = 1; i <= n; i++) {
         int quotient = n / i;
         int remainder = n % i;

         if (quotient == remainder) {
             count++;
         }
     }

     return count;
}

int main() {
     int n;

     printf("Enter a natural number n: ");
     scanf("%d", &n);

     if (n > 1 && n < 150) {
         int result = countEqualDivisors(n);
         printf("Number of equal divisors of the number %d: %d\n", n, result);
     } else {
         printf("Invalid input parameter. Please enter a whole number within (1, 150).\n");
     }

     return 0;
}
