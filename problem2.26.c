
#include <stdio.h>
#include <limits.h>

size_t strlen(const char* s);

int strlonger(char* s, char* t) {
  // return strlen(s) - strlen(t) > 0;
  return strlen(s) - strlen(t);
}

int main() {
  printf("%.2d\n", strlonger("abc", "abcdef"));
  return 0;
}
