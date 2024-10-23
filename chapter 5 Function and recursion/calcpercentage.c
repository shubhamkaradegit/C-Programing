#include<stdio.h>
int calcPercentage(int science, int math ,int sanskrit);

int main(){
     int science=99;
     int math=96;
     int sanskrit=98;

     printf("percentage is : %d",calcPercentage(science,math ,sanskrit));
    return 0;
}

int calcPercentage(int science, int math ,int sanskrit){
    return((science + math + sanskrit)/ 3);
}