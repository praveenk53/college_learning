#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;
    printf("enter age:");
    scanf("%d", &age);
    printf("enter height:");
    scanf("%f", &height);
    printf("enter grade(A/B/C):");
    scanf(" %c", &grade);
    printf("\n --- Student details ---\n");
    printf("Age: %d\n",age);
    printf("Height: %.1f\n",height);
    printf("Grade: %c\n",grade);
    return 0;
}