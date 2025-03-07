#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    int sum;
    int num;
    printf("Hello\n");
    printf("Please Enter number:\n");
    scanf("%d",&num);
    for(i=0;i<=12;i++)
    {
        sum=num*i;
        printf("%d * %d = %d\n",i,num,sum);

    }
    return 0;
}
