#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks (0-100) : ");
    scanf("%d", &marks);

    // if (marks >= 0 && marks <= 30)
    // {
    //     printf("fail \n");
    // }
    // else if (marks > 30 && marks <= 100)
    // {
    //     printf("pass");
    // }
    // else
    // {
    //     printf("wrong marks");
    // }
    // return 0;

    marks <= 30 ? printf("fail \n") : printf("pass");}