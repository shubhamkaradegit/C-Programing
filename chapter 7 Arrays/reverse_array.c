#include<stdio.h>

int reverse(int arr[],int n);
void printArray(int arr[],int n);
int main(){
 
 int arr[]={1,2,3,4,5};
 reverse(arr,3);
 printArray(arr,3);
 
return 0;
}
void printArray(int arr[],int n){  //call by reference
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");
}

int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;

    }
}