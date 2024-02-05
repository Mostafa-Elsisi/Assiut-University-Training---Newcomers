#include <stdio.h>

int main() {
    int numdays;
    scanf("%d",&numdays);
    int years = numdays /365;
    int months =(numdays % 365) / 30;
    int days =(numdays % 365) % 30;
    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days\n",days);
}