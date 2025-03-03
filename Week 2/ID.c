#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("Please Enter your ID...\n");
    scanf("%d", &id);
    switch(id)
    {
    case 1234:
        printf("Available ID\n");
        printf("%d -> Harry\n",id);
        break;
    case 5678:
        printf("Available ID\n");
        printf("%d -> Ron\n",id);
        break;
    case 1145:
        printf("Available ID\n");
        printf("%d -> Hermione\n",id);
        break;
     default:
        printf("Wrong ID\n");


    }

    return 0;
}
