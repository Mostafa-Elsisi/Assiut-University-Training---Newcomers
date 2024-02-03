#include <stdio.h>
int main()
{
    long long num1=0;
    long long num2=0;
    long long num3=0;
    long long num4=0;

    scanf("%lld%lld%lld%lld",&num1,&num2,&num3,&num4);
    printf("Difference = %lld\n",((num1*num2)-(num3*num4)));

}