#include<stdio.h>
void printAddress(int n);

void _printAddress(int *n);
int main(){
    int n=4;
      printf("%p\n",&n);
      //printAddress(n);        /* this done with call by value so copy of variable is passed
         _printAddress(&n);    // hence address will be different but value will be same n=4
                                //first printf statement declares first address */
return 0;
}

void printAddress(int n){
    printf("%p\n",&n);
}

void _printAddress(int *n){
    printf("%p\n",n);         //print value stored in ptr
}