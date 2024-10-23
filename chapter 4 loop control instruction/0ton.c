#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);

  /*  int i=0;                     //while loop
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    */
   for(int i=0;i<=n;i++){           //for loop
    printf("%d \n",i);
   }
    return 0;

}