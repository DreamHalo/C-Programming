#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
 
 int main(){

 srand(time(NULL));
 int arr[10];

 for(int i=0;i<10;i++){
    
 arr[i]=rand()%31+15;

 if(arr[i]%2!=0){
    arr[i]+=1;
 }
 printf("%d ",arr[i]);
}






    int son;
printf("Seriya kritng: ");
scanf("%d", &son);


int arr[5];

for(int i=0; i<son; i++){
    scanf("%d", &arr[i]);
    
    if(i%2!=0){
        printf("%d", arr[i]);
    }
    else{
        printf(" ");
    }


}
 }




























