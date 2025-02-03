#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int tmult_ok(int x, int y) {
  int64_t a = x;
  int64_t b = y;

  int64_t p = a * b;
  printf("%d\n", p);

  if (p >= 0) {
    return p <= INT_MAX;
  } else {
    return p >= INT_MIN;
  }
}

int main() {
  // 0
  printf("%d\n", tmult_ok(1000000000, 20));

  // 1
  printf("%d\n", tmult_ok(1000, 2));
}