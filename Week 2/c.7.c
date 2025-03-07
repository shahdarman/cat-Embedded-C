#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =1;
    int num;
    int sum=0;
    int ave;
    printf("Hello\n");

    for (i=0; i <10;i++)
    {
        printf("please Enter %d Number:\n",i);
        scanf("%d",&num);
        sum= sum +num;
    }
    ave=sum/10;
    printf("The Summation  of Numbers is  %d\n",sum);
    printf("The average  of Numbers is  %d\n",ave);
    return 0;
}
