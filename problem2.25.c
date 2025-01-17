#include <stdio.h>

float sum_elements(float a[], unsigned length) {
  int i;
  float result = 0;

  for (i = 0; i < length - 1; i++) {
    result += a[i];
  }

  return result;
}

int main() {
  float arr[] = { 1.0, 2.0 };
  float result = sum_elements(arr, 0);
  return 0;
}