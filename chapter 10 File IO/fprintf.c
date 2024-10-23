#include<stdio.h>

int main(){
FILE *fptr;
fptr = fopen("test.txt","w");

char ch;

fprintf(fptr,"%c",'M');
fprintf(fptr,"%c",'A');
fprintf(fptr,"%c",'N');
fprintf(fptr,"%c",'G');
fprintf(fptr,"%c",'O');
return 0;
}