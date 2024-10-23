#include<stdio.h>
#include<string.h>
    //user defined
struct student{
 char name[100];
 int roll;
 float cgpa;

};
int main(){
// struct student ece[100];
// ece[0].roll=1664;
// ece[0].cgpa=9.0;
// strcpy(ece[0].name,"shubham");

// printf("name = %s\n",ece[0].name);

struct student s1 = { "shubham", 1662, 9.0};
struct student s2 = { "Rahul", 3456,8.9};
struct student s3 = {"Aman", 5678,9.9};

printf("%s\n",s1.name);


//pointer in structres
struct student *ptr=&s1;
printf("student roll with ptr= %d\n",(*ptr).roll);

//arrow operator
//struct student *ptr=&s1;
printf("student roll with arrow= %d\n",ptr->roll);

return 0;
}