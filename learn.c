#include <stdio.h>
#include <math.h>

typedef struct point {
  double x;
  double y;
} Point;

double distance(Point pointA, Point pointB) {
  return fabs(sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2)));
}

int main() {
  // the colors are waay too deep

  Point pointA;

  printf("PointA (x,y): ");
  scanf("%lf,%lf", &pointA.x, &pointA.y);
  
  Point pointB;

  printf("PointB (x,y): ");
  scanf("%lf,%lf", &pointB.x, &pointB.y);

  if (feof(stdin)) {
    printf("\nProgram terminated.\n");
    return 0;
  }

  printf("The distance between PointA and PointB is %.1f\n", distance(pointA, pointB));

  return 0;
}