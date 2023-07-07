#include <stdio.h>
#include <math.h>

double vector_length(int x1, int y1, int x2, int y2) {
     int dx = x2 - x1;
     int dy = y2 - y1;
     return sqrt(dx*dx + dy*dy);
}

int main() {
     int x1, y1, x2, y2;
     printf("Enter the coordinates of the starting point of the vector (x1, y1): ");
     scanf("%d %d", &x1, &y1);
     printf("Enter the coordinates of the end point of the vector (x2, y2): ");
     scanf("%d %d", &x2, &y2);

     double length = vector_length(x1, y1, x2, y2);
     printf("Vector length: %.6f\n", length);

     return 0;
}
