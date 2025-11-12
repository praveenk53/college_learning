#include<stdio.h>
int main()
{
    int x;
    printf("enter the age : ");
    scanf("%d",&x);
    if (x>=18)
    {
        printf("you are eligible to vote\n");
    }
     else
    {
         printf("not eligible to vote \n");
    }
        return 0;
    }
