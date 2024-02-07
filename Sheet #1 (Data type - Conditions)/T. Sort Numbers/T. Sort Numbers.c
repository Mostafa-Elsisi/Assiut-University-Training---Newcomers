#include <stdio.h>

int main() {
  int num1, num2, num3;
  int a, b, c;
  scanf("%d %d %d", &num1, &num2, &num3);
  if (num1 >= num2 && num1 >= num3) {
    a = num1;
    if (num2 >= num3) {
      b = num2;
      c = num3;
    } else {
      b = num3;
      c = num2;
    }
  } else if (num2 >= num1 && num2 >= num3) {
    a = num2;
    if (num1 >= num3) {
      b = num1;
      c = num3;
    } else {
      b = num3;
      c = num1;
    }

  } else {
    a = num3;
    if (num1 >= num2) {
      b = num1;
      c = num2;
    } else {
      b = num2;
      c = num1;
    }
  }
  printf("%d\n%d\n%d\n\n", c, b, a);
  printf("%d\n%d\n%d\n", num1, num2, num3);

  return 0;
}