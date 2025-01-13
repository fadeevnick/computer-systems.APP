#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  int i;
  int result = 0;

  for (i = 0; i < len; i++) {
    printf(" %.2i", start[i]);
    // result += start[i]
  }
  printf("\n");
}

void show_int(int x) {
  // char* c = &x;
  show_bytes((byte_pointer) &x, sizeof(int));
}


// void main() {
//   // int variable = 12345;
//   int var2 = 11;
//   // show_int(variable);
//   show_int(10);
//   // printf("%i\n", sizeof(char*));
//   // printf("%i\n", sizeof(int*));
//   // printf("%i\n", sizeof(double*));
//   // printf("%i\n", &var2);

//   int* var_pointer = &var2;

//   int i;
//   for (i = 0; i < sizeof(int); i++) {
//     printf(" %.2i", var_pointer[i]);
//   }
//   printf("\n");
// }

void main() {
  int var = 10;

  int* int_pointer = &var;

  //prints four int(s)
  int i;
  for (i = 0; i < sizeof(int); i++) {
    printf(" %.2i", int_pointer[i]);
  }

  printf("\n");

  char* char_pointer = (char*)&var;

  //prints one int (byte by byte), because it's char* (pointer that points to each char (byte))
  int j;
  for (j = 0; j < sizeof(int); j++) {
    printf(" %.2i", char_pointer[j]);
  }
  printf("\n");
}