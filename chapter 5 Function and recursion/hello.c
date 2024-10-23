#include <stdio.h>

void printhello(); // declation /prototype

int main()
{
    printhello();     // function call
    printhello();
    printhello(); 
    return 0;
}

// function declarationṇ
void printhello()
{
    printf("hello \n");
}