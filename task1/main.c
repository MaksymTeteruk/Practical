#include <stdio.h>
#include <stdlib.h>




int main() {
    int t1, t2, t3;
    float total_time;


    printf("Enter value t1: ");
    scanf_s("%d", &t1);
    printf("Enter value t2: ");
    scanf_s("%d", &t2);
    printf("Enter value t3: ");
    scanf_s("%d", &t3);


    total_time = t1 + t2 + t3;


    printf("Guests can charge a pie for %.2f hours\n", total_time);

    return 0;
}
