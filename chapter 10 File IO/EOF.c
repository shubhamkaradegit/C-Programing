#include<stdio.h>

int main(){
FILE  *fptr;
fptr = fopen("test.txt","r");

char ch;
ch = fgetc(fptr);

while(ch != EOF){
    printf("%c",ch);
    ch = fgetc(fptr);
}
printf("\n");
return 0;
}