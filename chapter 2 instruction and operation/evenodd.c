#include <stdio.h>
int main()
{
    //even--> 1
    //odd--> 0
    int a;
    printf("enter number : ");
    scanf("%d",&a);

    printf("%d \n", a % 2 == 0);

    int issunday;
    int ismonday;
    printf("%d \n",issunday && ismonday);
    return 0;
    }