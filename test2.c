#include <stdio.h>
#include <limits.h>

int main() {
  char a = 100;
  char b = 100;
  char c = a + b;
  char d = (char)-100 - (char)100;

  printf("%.2d\n", c);
  printf("%.2d\n", d);
}
