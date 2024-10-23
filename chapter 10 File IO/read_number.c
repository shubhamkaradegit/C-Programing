#include<stdio.h>

int main(){
FILE *fptr;
fptr = fopen("number.txt","r");

int n;
fscanf(fptr, "%d",&n);
fprintf("number = %d\n",n);

fscanf(fptr, "%d",&n);
fprintf("number = %d\n",n);
fscanf(fptr, "%d",&n);
fprintf("number = %d\n",n);
fscanf(fptr, "%d",&n);
fprintf("number = %d\n",n);
fscanf(fptr, "%d",&n);
fprintf("number = %d\n",n);
fclose(fptr);
return 0;
}