#include <stdio.h>
#include <limits.h>

int min_steps(int x, int y) {
    if (x == y) return 0;
    if (y == x + 1) return 1;

    int min_steps_arr[y + 1];
    for (int i = 0; i <= y; i++) {
        min_steps_arr[i] = INT_MAX;
    }

    min_steps_arr[x] = 0;

    for (int i = x + 1; i <= y; i++) {
        int min_val = min_steps_arr[i - 1];

        // Перевірка для кроку на (i/2) залежно від того, чи є i парним чи непарним числом
        if (i % 2 == 0) {
            if (min_steps_arr[i / 2] < min_val) {
                min_val = min_steps_arr[i / 2];
            }
        }
        else {
            if (min_steps_arr[i / 2 + 1] < min_val) {
                min_val = min_steps_arr[i / 2 + 1];
            }
        }

        min_steps_arr[i] = min_val + 1;
    }

    return min_steps_arr[y];
}

int main() {
    int x = 45, y = 48;
    int result = min_steps(x, y);
    printf("min_steps(%d, %d) = %d\n", x, y, result);

    x = 45, y = 49;
    result = min_steps(x, y);
    printf("min_steps(%d, %d) = %d\n", x, y, result);

    x = 45, y = 50;
    result = min_steps(x, y);
    printf("min_steps(%d, %d) = %d\n", x, y, result);

    x = 45, y = 51;
    result = min_steps(x, y);
    printf("min_steps(%d, %d) = %d\n", x, y, result);

    return 0;
}
