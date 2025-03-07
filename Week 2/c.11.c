#include <stdio.h>
#include <stdlib.h>

int main()
{
    int correct;
    int i = 0;
    printf(" Enter the result of 3 x 4\n");
    printf("Please Enter The Correct Answer!\n");
    scanf("%d",&correct);
    if(correct==12)
    {
        printf("Thanks\n");
    }
    else if(correct!=12)
    {
        printf("try again\n");
        for(i=0; i<=20;i++)
        {
            scanf("%d",&correct);
             if(correct==12)
            {printf("Thanks\n");}
            else if (correct!=12)
                printf("try again\n");


        }
    }



    return 0;
}
