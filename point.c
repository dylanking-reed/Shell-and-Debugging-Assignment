struct point2d{
  int x;
  int y;
}

int main(char* argc, char* argv) {
  int m = atoi(argv[1]);
  struct point2d *p = malloc(sizeof(struct point2d));
  p->x = atoi(argv[2]);
  p->y = atoi(argv[3]);
  struct point2d *z = malloc(sizeof(struct point2d));
  z->x = 0;
  z->y = z->y - (m * p->x);
  printf("x coord: %d\n", p->x);
  printf("y coord: %d\n", p->y);
  return 0;
}
