#include<stdio.h>

int main(){
// float price=100.00;
// float *ptr=&price;
// float **pptr=&ptr;

int i=5;
int *ptr=&i;
int **pptr=&ptr;
printf("%d \n",**pptr);  /*ptr give value at address of ptr (&ptr)
                          now  **pptr give  value stored at address of ptr*/
return 0;
}