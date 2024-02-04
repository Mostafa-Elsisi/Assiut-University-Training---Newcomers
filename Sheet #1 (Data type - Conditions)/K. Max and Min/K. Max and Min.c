# include <stdio.h>

int main (){
    int num1 ,num2,num3;
    int max ,min;
    scanf("%d%d%d",&num1,&num2,&num3);
    if ((num1 >= num2) && (num1 >= num3))
    {
        max =num1;
        if(num2 <= num3)
        {
            min = num2;
        }
        else
        {
            min = num3;
        }
    }
    else if((num2 >= num1) && (num2 >= num3))
    {
        max = num2;
        if(num1<=num3)
        {
            min = num1;
        }
        else
        {
            min = num3;
        }
    }
    else
    {
        max  = num3 ;
        if(num2 <= num1)
        {
            min = num2;
        }
        else
        {
            min = num1;
        } 
    }
    printf("%d %d\n",min,max);  
}
