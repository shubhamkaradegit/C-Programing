#include<stdio.h>

void storeTable(int arr[][10],int n,int m,int number);
int main(){
int tables[10][10];


storeTable(tables,0,10,1);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[0][i]);
    }
   
   printf("\n");
   storeTable(tables,1,10,2);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[1][i]);
    }
   
   printf("\n");
   storeTable(tables,2,10,3);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[2][i]);
    }
   
   printf("\n");
   storeTable(tables,3,10,4);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[3][i]);
    }
      printf("\n");

   storeTable(tables,4,10,5);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[4][i]);
    }
   
   printf("\n");
   storeTable(tables,5,10,6);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[5][i]);
    }
   
   printf("\n");
   storeTable(tables,6,10,7);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[6][i]);
    }
      printf("\n");

   storeTable(tables,7,10,8);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[7][i]);
    }
      printf("\n");

   storeTable(tables,8,10,9);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[8][i]);
    }
   
   printf("\n");
   storeTable(tables,9,10,10);
 for(int i=0;i<10;i++){
        printf("%d \t",tables[9][i]);
    }
      printf("\n");
return 0;

}


void storeTable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][i]= number*(i+1);
        
    }
    
}