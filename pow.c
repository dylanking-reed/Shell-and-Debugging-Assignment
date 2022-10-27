/*
int power(int base, int exp) {
  int first_base = base;
  while (exp > 1) {
    base *= base;
    if (exp & 1) {
      base *= first_base;
    }
    exp >>= 1;
  }
  return base;
}
*/

int power(int base, unsigned int exp) {
  if (exp == 0) { return 1; }
  int accumulator = 1;
  while (exp > 1) {
    if (exp & 1) {
      accumulator *= base;
    }
    base *= base;
    exp >>= 1;
  }
  return accumulator * base;
}
