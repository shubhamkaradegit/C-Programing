#include<stdio.h>
int main()
{
    char ch;
    printf("enter character : ");
    scanf("%s",&ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("uppercase \n");

    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lowercase \n");
    }
    else{
        printf("not a english letter");
    }
}