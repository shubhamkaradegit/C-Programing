#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter second number : ");
    scanf("%d",&b);
     
    printf("enter third number : ");
    scanf("%d",&c);

    if(a > b || a > c){
        printf("a is largest number \n");
    }else if(b > a && b > c){
        printf("b is largest number \n");
    }
    else{
        printf("c is largest number");
    }
}