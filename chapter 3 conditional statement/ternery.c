#include<stdio.h>
int main()
{
    /*conditional operator
    ternary
    condition ? do something if true : do something if false;
    */
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    age >= 18 ? printf("aldult") : printf("not adult");
    return 0;
}