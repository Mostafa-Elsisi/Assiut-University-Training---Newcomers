#include <stdio.h>
int main() {
  int num1 = 0;
  long long num2 = 0;
  char charcter;
  float num3 = 0.0;
  double num4 = 0.0;
  scanf("%i %lld %c %f %lf", &num1, &num2, &charcter, &num3, &num4);
  printf("%i\n%lld\n%c\n%.2f\n%.1lf\n", num1, num2, charcter, num3, num4);
}