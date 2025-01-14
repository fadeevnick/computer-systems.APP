#include <stdio.h>

void printA(int x) {
  printf("%.2x\n", x & 0xFF);
}

void printC(int x) {
  printf("%.2x\n", x | 0xFF);
}

int main() {
  int x = 0x87654321;
  printC(x);

  return 0;
}