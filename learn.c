#include <stdio.h>
#include <math.h>

struct point {
  double x;
  double y;
};

double distance(struct point pointA, struct point pointB) {
  // y / x

  return fabs((pointA.y - pointB.y) / (pointA.x - pointB.x));
}

int main() {

  struct point pointA;

  printf("PointA (x,y): ");
  scanf("%lf,%lf", &pointA.x, &pointA.y);
  
  struct point pointB;

  printf("PointB (x,y): ");
  scanf("%lf,%lf", &pointB.x, &pointB.y);

  printf("The distance between PointA and PointB is %.1f\n", distance(pointA, pointB));

  return 0;
}