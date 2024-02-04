# include <stdio.h>
# include <string.h>

int main ()
{
    char f1 [100];
    char s1 [100];
    char f2 [100];
    char s2 [100];
    scanf("%s %s",f1,s1);
    scanf("%s %s",f2,s2);

    printf(((strcmp(s1 , s2) == 0)) ? "ARE Brothers" : "NOT" ) ;

}
