#include <stdio.h>

void show_bytes(char* start, size_t len) {
  int i;

  for (i = 0; i < len; i++) {
    printf(" %.2x", start[i]);
  }
  printf("\n");
}


void main() {
  int a = 0x12345678;
  char* ap = (char*) &a;

  show_bytes(ap, 1);
  show_bytes(ap, 2);
  show_bytes(ap, 3);
}