#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int reminder;
    while(num != 0)
    {
        reminder = num % 10;
        num = num / 10;
    }
    if(reminder % 2 ==0)
    {
        printf("EVEN\n");
    }else
    {
        printf("ODD\n");
    }

}