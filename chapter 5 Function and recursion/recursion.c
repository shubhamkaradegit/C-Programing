#include<stdio.h>
void printhw(int count);

int main(){
     printhw(5);
return 0;
}

//recursive function
void printhw(int count){
    if(count == 0){        //if statement is important otherwise it will be infinite loop
        return;
    }
    printf("hello world \n");
    printhw(count-1);
}