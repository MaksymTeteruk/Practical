#include <stdio.h>
#include <string.h>

int factorial(int n) {
     if (n <= 1) {
         return 1;
     } else {
         return n * factorial(n - 1);
     }
}

int countAnagrams(char word[]) {
     int length = strlen(word);

     // Frequency array to store the number of each letter
     int frequency[26] = {0};

     // Calculation of the frequency of each letter in the word
     for (int i = 0; i < length; i++) {
         frequency[word[i] - 'A']++;
     }

     // Calculation of the number of anagrams using the factorial formula
     int totalAnagrams = factorial(length);
     for (int i = 0; i < 26; i++) {
         if (frequency[i] > 1) {
             totalAnagrams /= factorial(frequency[i]);
         }
     }

     return totalAnagrams;
}

int main() {
     char word[15];
     printf("Enter the word: ");
     scanf("%s", word);

     int anagramCount = countAnagrams(word);
     printf("Number of possible anagrams: %d\n", anagramCount);

     return 0;
}
