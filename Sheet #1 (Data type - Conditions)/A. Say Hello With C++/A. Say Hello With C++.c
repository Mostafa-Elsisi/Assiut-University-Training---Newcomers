#include <stdio.h>
int main ()
{
    char name [100];
    scanf("%[^\n]", name); // fgets(name, sizeof(name), stdin);
    printf("Hello, %s",name);
}