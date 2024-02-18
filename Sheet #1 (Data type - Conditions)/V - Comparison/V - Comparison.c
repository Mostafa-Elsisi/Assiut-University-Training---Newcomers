#include <stdio.h>

int main() {
  int n1, n2;
  char c;
  scanf("%d %c %d", &n1, &c, &n2);
  fflush(stdin);

  switch (c) {
  case '>':
    if (n1 > n2) {
      printf("Right\n");
    } else {
      printf("Wrong\n");
    }
    break;
  case '<':
    if (n1 < n2) {
      printf("Right\n");
    } else {
      printf("Wrong\n");
    }
    break;
  case '=':
    if (n1 == n2) {
      printf("Right\n");
    } else {
      printf("Wrong\n");
    }
    break;
  }
}
