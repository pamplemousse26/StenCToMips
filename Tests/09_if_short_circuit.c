//#include <stdio.h>
//#define printf(X) fprintf(stdout, "%s", (X))
//#define printi(X) fprintf(stdout, "%d", (X))

int main() {
  int a;
  int b;
  a = 40;
  b = 10;
  if ((a == b) || (a < b) && (a*b > 0)) {
    printf("NOT ");
  }
  printf("OK !!!");
}
