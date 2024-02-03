#include<stdio.h>

int main()
{
    long long num1=0;
    long long num2=0;
    scanf("%lld%lld",&num1,&num2);
    printf("%lld\n",((num1%10)+(num2%10)));
}
