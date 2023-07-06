#include <stdio.h>

int countSequences(int n) {
     int dp[n+1];
     int i;

     dp[0] = 1;
     dp[1] = 2;
     dp[2] = 4;

     for (i = 3; i <= n; i++) {
         dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 12345;
     }

     return dp[n];
}

int main() {
     int n;

     printf("Enter the length of sequences n: ");
     scanf("%d", &n);

     if (n > 1 && n < 10000) {
         int result = countSequences(n);
         printf("Number of searched sequences: %d\n", result);
     } else {
         printf("Invalid input parameter. Please enter sequence length within (1, 10000).\n");
     }

     return 0;
}
