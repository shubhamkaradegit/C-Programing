#include<stdio.h>

int main(){
// char name[50];
// scanf("%s",name);
// printf("your name is %s",name);


// char fullName[50];
// scanf("%s",fullName);
// printf("your name is %s",fullName);

// char str[100];
// gets(str);
// puts(str);


//gets() is dangerous thats why we use fgets()

char str[100];
fgets(str,100,stdin);
puts(str);
return 0;
}