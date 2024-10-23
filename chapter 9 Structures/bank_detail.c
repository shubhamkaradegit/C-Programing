#include<stdio.h>
#include<string.h>
typedef struct BankAccount{
    int accountNo;
    int name[100];

}acc;
int main(){
acc acc1 = {123,"shubham"};
acc acc2 = {124,"Ramesh"};
acc acc3 = {125,"Aman"};

printf("acc No = %d \n ",acc1.accountNo);
printf("name = %s \n", acc3.name);
return 0;
}