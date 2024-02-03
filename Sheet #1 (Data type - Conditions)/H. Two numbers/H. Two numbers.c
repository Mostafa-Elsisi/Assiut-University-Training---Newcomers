#include <stdio.h>
#include <math.h>

int main() {
    int num1 = 0;
    int num2 = 0;

    scanf("%d%d", &num1, &num2);

    // Convert one of the operands to double before division
    double divisionResult = (double)num1 / num2;

    printf("floor %d / %d = %0.f\n", num1, num2, floor(divisionResult));
    printf("ceil %d / %d = %0.f\n", num1, num2, ceil(divisionResult));
    printf("round %d / %d = %0.f\n", num1, num2, round(divisionResult));

    return 0;
}

/*
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
*/