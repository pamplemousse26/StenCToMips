//#include <stdio.h>
//#define printf(X) fprintf(stdout, "%s", (X))
//#define printi(X) fprintf(stdout, "%d", (X))

// Output:
// 0 40 41 42 1 40 41 42 

int main() {
  int a;
  int b;
  int c;
  a = 0;
  b = 40;
  c = -2;
  while (a < 2) {
    printi(a);
    printf(" ");
    while (b < 43) {
      printi(b);
      printf(" ");
      b = b + 1;
    }
    a = a + 1;
    b = 40;
  }
  printf("\n");
  return 0;
}
