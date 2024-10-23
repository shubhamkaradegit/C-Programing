#include<stdio.h>
void printtable(int n);
int main(){

    int n;
    printf("enter number :");
    scanf("%d",&n);
    
    printtable(n);    //here n is argument/actual parameter
return 0;

}

void printtable(int n){      //parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }
}