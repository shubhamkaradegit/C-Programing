#include<stdio.h>
#include<stdlib.h>

int main(){
// printf("%d\n",sizeof(int));
// printf("%d\n",sizeof(char));
// printf("%d\n",sizeof(float));

int *ptr;
ptr = (float*)calloc(5 , sizeof(float)); //allote 0 to every location


for(int i = 0 ;i<5;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}