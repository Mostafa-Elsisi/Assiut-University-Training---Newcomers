#include <stdio.h>

int main() {
    int num1,num2;
    char c ;
    scanf("%d%c%d", &num1,&c,&num2);
    switch(c)
    {
        case'+':
            printf("%d\n",(num1+num2));
            break;
        case'*':
            printf("%d\n",(num1*num2));
            break;
        case'/':
            printf("%d\n",(num1/num2));
            break;
        case'-':
            printf("%d\n",(num1-num2));
            break;
    }

}