#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y) {
  return x + y < x;
}

int main() {
  printf("%d\n", sizeof(unsigned));
  printf("%u\n", UINT_MAX);
}