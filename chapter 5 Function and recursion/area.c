#include<stdio.h>

float squarearea(float side);
float circlearea(float radius);
float ractanglearea(float a, float b);

int main(){
    float side=10;
    squarearea(side);
    
float radius=30;
circlearea(radius);


float a=20;
float b=30;
ractanglearea(a,b);

return 0;
}

float squarearea(float side){
    float area=side*side;
    printf("area of square is : %f \n ",area);
}


float circlearea(float radius){
    float area=3.14*radius*radius;
    printf("area of circle : %f \n",area);
    }

float ractanglearea(float a,float b){
    float area = a * b;
    printf("area of ractangle is : %f \n",area);
}