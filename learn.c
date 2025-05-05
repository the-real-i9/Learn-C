#include <stdio.h>
#include <math.h>

typedef struct point {
  double x;
  double y;
} Point;

double distance(Point pointA, Point pointB) {
  // y / x

  return fabs((pointA.y - pointB.y) / (pointA.x - pointB.x));
}

int main() {

  Point pointA;

  printf("PointA (x,y): ");
  scanf("%lf,%lf", &pointA.x, &pointA.y);
  
  Point pointB;

  printf("PointB (x,y): ");
  scanf("%lf,%lf", &pointB.x, &pointB.y);

  printf("The distance between PointA and PointB is %.1f\n", distance(pointA, pointB));

  return 0;
}