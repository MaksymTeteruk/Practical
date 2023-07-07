#include <stdio.h>
#include <math.h>

int findCircleIntersection(int x1, int y1, int r1, int x2, int y2, int r2) {
     // Distance between circle centers
     double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

     // Checking the ratio of the radii and the distance between the centers to determine the number of intersection points
     if (distance > r1 + r2) {
         return 0; // Circles do not intersect
     } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
         return 1; // One intersection point
     } else if (distance < fabs(r1 - r2)) {
         return 0; // One circle inside another, no intersection points
     } else {
         return 2; // Two intersection points
     }
}

int main() {
     int x1, y1, r1, x2, y2, r2;
     printf("Enter the coordinates of the center and the radius of the first circle (x1, y1, r1): ");
     scanf("%d %d %d", &x1, &y1, &r1);
     printf("Enter the coordinates of the center and the radius of the second circle (x2, y2, r2): ");
     scanf("%d %d %d", &x2, &y2, &r2);

     int intersectionPoints = findCircleIntersection(x1, y1, r1, x2, y2, r2);
     printf("Number of intersection points: %d\n", intersectionPoints);

     return 0;
}
