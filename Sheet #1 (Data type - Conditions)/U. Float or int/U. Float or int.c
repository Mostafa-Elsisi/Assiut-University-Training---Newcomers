#include <stdio.h>
#include <stdlib.h>

int main() {
  float n;
  scanf("%f", &n);
  int integer = n;
  float d = n - integer;
  if (d == 0) {
    printf("int %d", integer);
  } else {
    printf("float %d %.3f", integer, d);
  }
}
