#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y) {
  return x + y < x ? 0 : 1;
}

int main() {
  printf("%d\n", sizeof(unsigned));
  printf("%u\n", UINT_MAX);

  printf("%d\n", uadd_ok(4, 4));
  printf("%d\n", uadd_ok(4, UINT_MAX));
}