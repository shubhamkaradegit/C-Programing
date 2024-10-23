#include<stdio.h>
#include<string.h>

int main(){
char firstStr[100] = "hello";
char secStr[] = "world";
strcat(firstStr,secStr);
puts(firstStr);
return 0;
}