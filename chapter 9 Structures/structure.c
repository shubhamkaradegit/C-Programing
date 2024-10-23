#include<stdio.h>
#include<string.h>
    //user defined
struct student{
 char name[100];
 int roll;
 float cgpa;

};
int main(){
struct student s1;
s1.roll=1664;
s1.cgpa=9.2;
//s1.name ="shubham"
strcpy(s1.name,"shubham");

printf("Student name = %s\n",s1.name);
printf("Student roll = %d\n",s1.roll);
printf("Student name = %.2f\n",s1.cgpa);

struct student s2;
s2.roll=1668;
s2.cgpa=9.0;
//s1.name ="shubham"
strcpy(s2.name,"Aman");

printf("Student name = %s\n",s2.name);
printf("Student roll = %d\n",s2.roll);
printf("Student name = %.2f\n",s2.cgpa);


struct student s3;
s3.roll=1660;
s3.cgpa=9.5;
//s1.name ="shubham"
strcpy(s3.name,"Rahul");

printf("Student name = %s\n",s3.name);
printf("Student roll = %d\n",s3.roll);
printf("Student name = %.2f\n",s3.cgpa);
return 0;
}