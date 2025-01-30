#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y) {
  if (x >= 0) {
    return x + y >= 0;
  } else {
    return x + y < 0;
  }
}

int main() {
  // 0
  printf("%d\n", tadd_ok(INT_MAX, INT_MAX));
  printf("%d\n", tadd_ok(INT_MAX, 1));
  printf("%d\n", tadd_ok(INT_MIN, INT_MIN));
  printf("%d\n", tadd_ok(INT_MIN, -5));

  // 1
  printf("%d\n", tadd_ok(INT_MAX, -5));
  printf("%d\n", tadd_ok(INT_MIN, 5));
  printf("%d\n", tadd_ok(0, 0));
  printf("%d\n", tadd_ok(1, 1));
  printf("%d\n", tadd_ok(INT_MIN, INT_MAX));
}