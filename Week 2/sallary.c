#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Hours;
    float sallary;
    float disc;
    float csallary;



    printf("Please Enter Your working Hours:\n");

    scanf("%f",&Hours);
    if(Hours >=40)
    {
       sallary =Hours * 50;
        printf("your sallary is %.2f:\n", sallary);
    }else if (0>Hours<40)
    {

          printf("a 10% deduction will be applied\n ");
        sallary =Hours * 50;
        printf("Your Sallary is:%.2f\n",sallary );
         disc = sallary * (10/100);
         csallary = sallary-(disc);
        printf("your sallary after discount is  :\n %.2f", csallary);

    }
    return 0;
}
