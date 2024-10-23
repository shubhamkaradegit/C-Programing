#include<stdio.h>
#include<string.h>


struct student{
    char name[100];
    int roll;
    float cgpa;

};

void printInfo(struct student s1);
int main(){
struct student s1 = {"shubham" ,123,9.8};
struct student s2 = { "Ramesh" ,345,9.9};
struct student s3 = { "Raj", 678,9.7};

printInfo(s1);

return 0;
}


void printInfo(struct student s1){
    printf("Students Information : \n");
    printf("Students.name = %s\n",s1.name);
    printf("Students.roll = %d\n",s1.roll);
    printf("Student.cgpa = %.1f\n",s1.cgpa);
}