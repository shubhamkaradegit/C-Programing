#include<stdio.h>

int main(){
 int n, a=0,b=1,c;
 printf("enter number : ");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
    printf("%d \t",a);          // \t is used for tab space
    c=a+b;
    a=b;
    b=c;
 }
return 0;
}