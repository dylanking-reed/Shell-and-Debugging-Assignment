#include <stdio.h>
#include <assert.h>

#include "pow.h"

void pow_test() {
  fprintf(stderr, "Running test %s... ", __FUNCTION__);
  assert(power(3, 5) == 243);
  assert(power(2, 4) == 16);
  assert(power(-1, 3) == -1);
  assert(power(-1, 4) == 1);
  assert(power(235451, 0) == 1);
  fprintf(stderr, "PASSED\n");
}

int main(void) {
  pow_test();
  return 0;
}
