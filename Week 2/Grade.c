#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("please Enter Your Grade\n");
    scanf("%d",&grade);
    if (65<grade >= 50)
    {
        printf("your grade is good\n");
    }else if(85< grade >=65)
    {
        printf("your grade is very good\n");

    }else if (100<grade>=85)
    {
         printf("your grade is Excellent\n");

    }else if (50<grade>=0)
    {
        printf("your grade is acceptable\n");
    }
    else
    printf("please Enter Valid Data\n");

    return 0;
}
