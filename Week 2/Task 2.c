
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Hello \n");
    printf("please Enter The Number :\n");
    scanf("%d" , &number);
    if (number%2==0)
    {
        printf("The Number %d is Even Number \n" , number);
    }
    else
     printf("The Number %d is odd Number \n", number);


    return 0;
}