#include <stdio.h>
#include <string.h>

void show_bytes(char* start, size_t len) {
  int i;

  for (i = 0; i < len; i++) {
    printf(" %.2x", start[i]);
  }
  printf("\n");
}


void main() {
  char* m = "mnopqr";

  show_bytes(m, strlen(m));
}