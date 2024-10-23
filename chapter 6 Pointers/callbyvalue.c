#include<stdio.h>
void square(int n);
void _square(int  *n);

int main(){
 int number=4;
 square(number);
 printf("number = %d\n",number);

 _square(&number);
 printf("number = %d\n",number);
return 0;
}


//call by value       when we pass value of variable as argument(copy passed)
void square(int n){
    n=n*n;
    printf("square = %d\n",n);
}

//call by reference    we pass address of variable as argument
void _square(int *n){
    *n=(*n) * (*n);     //4*4
    printf("square = %d\n",*n);
}