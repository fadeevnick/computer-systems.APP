#include <stdio.h>

int bis(int x, int m) {
  return x | m;
}

int bic(int x, int m) {
  return bis(x, m) ^ m;
}

int bool_or(int x, int y) {
  int result = bis(x, y); 
  return result;
}

int bool_xor(int x, int y) {
  int result = bic(0x876543FF, 0xFF000000);
  return result;
}

int main() {
  printf("%.2x\n", bool_or(0x876543FF, 0xFF000000));
  printf("%.2x\n", bool_xor(0x876543FF, 0xFF000000));
}