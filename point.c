#include <stdio.h>
#include <stdlib.h>

typedef struct Point2D_s {
  int x;
  int y;
} Point2D;

int main(int argc, char** argv) {
  Point2D *p = malloc(sizeof(Point2D));
  if (argc == 3) {
    p->x = atoi(argv[1]);
    p->y = atoi(argv[2]);
  } else {
    fprintf(stderr, "Error: exactly 2 arguments must be provided.\n");
    exit(1);
  }
  printf("x coord: %d\n", p->x);
  printf("y coord: %d\n", p->y);
  free(p);
  return 0;
}
