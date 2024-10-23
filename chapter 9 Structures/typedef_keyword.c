#include<stdio.h>
#include<string.h>
typedef struct ComputerEngineeringStudent {
    char name[100];
    int roll;
    float cgpa;

}coe;
int main(){
  coe s1;
  strcpy(s1.name,"shubham");
  s1.roll = 345;
  s1.cgpa= 9.2;

  printf("Student name is %s\n",s1.name);
  printf("students roll = %d\n",s1.roll);
  printf("students cgpa = %f\n",s1.cgpa);
return 0;
}