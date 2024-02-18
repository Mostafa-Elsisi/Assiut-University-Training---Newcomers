#include <stdio.h>

int main() {
  int n1, n2, n3;
  char p, q;
  scanf("%d %c %d %c %d", &n1, &p, &n2, &q, &n3);
  fflush(stdin);
  switch (p) {
  case '+':
    if ((n1 + n2) == n3) {
      printf("Yes\n");
    } else {
      printf("%d\n", (n1 + n2));
    }
    break;
  case '-':
    if ((n1 - n2) == n3) {
      printf("Yes\n");
    } else {
      printf("%d\n", (n1 - n2));
    }
    break;
  case '*':
    if ((n1 * n2) == n3) {
      printf("Yes\n");
    } else {
      printf("%d\n", (n1 * n2));
    }
    break;
  }
}
