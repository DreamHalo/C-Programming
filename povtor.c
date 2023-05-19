#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

int main() {
   int n,a,b=0; 
   printf("nechta xona ochidhni xoxlaysiz: ");
   scanf("%d",&n); 
   
     srand(time(NULL));
 int arr[n] ;
 

 for(int i=0;i<n;i++){
    arr[i] = rand()%99+1; 
    printf("%d ", arr[i]);
}puts("") ;
     for(int i=0;i<n;i++){
        for( int j=0;j<n;j++){
             if(arr[i]<arr[j]){ 
                b=arr[j] ;
                arr[ j]=arr[i];
                 arr[i]=b;
             }
         }
     }
    for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
 }
    puts(""); int 
     b=arr[0];
      arr[0]=arr[n-1];
      arr[n-1]=b;
      
        for(int i=0;i<n;i++){
          printf("%d ", arr[i]);
 }
     puts(""); 
     for(int i=1;i<n-1;i++){
         for( int j=i+1;j<n-1;j++){
             if(arr[i]<arr[j]){
                 b=arr[i];
                 arr[i]=arr[j];
                 arr[j]=b ;
            }
         }
 }
   for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
    }
    puts("");
}