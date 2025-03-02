#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Please Enter The First Number:\n");
    scanf("%d",&num1);
    printf("Please Enter The Scond Number:\n");
    scanf("%d",&num2);
    printf("Please Enter The Third Number:\n");
    scanf("%d",&num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("Number %d is Max Number\n",num1);
    }else if(num2 > num1 && num2 > num3)
    {
        printf("Number %d is Max Number\n",num2);
    }else if (num3 > num1 && num3 > num1)
    {
        printf("Number %d is Max Number\n",num3);

    }else
    {
        printf("Three number are equal!\n");
    }

    return 0;
}
