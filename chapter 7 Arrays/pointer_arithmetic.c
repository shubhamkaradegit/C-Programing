#include<stdio.h>

 int main(){
// int age=22;
// int *ptr=&age;
// printf("ptr = %u\n",ptr);
// ptr++;
// printf("ptr = %u\n",ptr);
// ptr--;
// printf("ptr = %u\n",ptr);

// char star='*';
// char *ptr=&star;
// printf("ptr = %u\n",ptr);
// ptr++;
// printf("ptr = %u\n",ptr);
// ptr--;
// printf("ptr = %u\n",ptr);


int age=22;
int _age=23;
int *ptr =&age;
int *_ptr=&_age;

printf("%u,%u difference is : %u\n",ptr,_ptr,ptr-_ptr);
printf("comparision = %u\n", ptr == _ptr);
return 0;
}