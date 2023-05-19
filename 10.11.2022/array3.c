#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

 //                                                         bubble sort -> pufakchali sortlash

    void printArr(int arr[],int uzunlik){
        for(int i=0; i<uzunlik;){
            printf("%d",arr[i]);
        }

    }

    








int main (){
    // int n;
    // scanf("%d",&n);
    // int arr[n];

    // for(int i=0; i<n;i++){
    //     arr[n]=rand()%n;
    //     printf("%d",arr[i]);
        
    // }
    // puts("");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[j],arr[j+1]){
    //             int zapas =arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=zapas;

    //         }
    //     }
    // }
    
    int m[10] = {9, 3, 5, 7, 8, 1, 2, 4, 6, 10};          
    int u = sizeof(m)/sizeof(m[0]);
    for(int i=0; i<u; i++){
        for(int j=0; j<u; j++){
            if(m[j]>m[j+1]){
                int zahira = m[j];
                m[j] = m[j+1];
                m[j+1] = zahira;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ", m[i]);
    }
    puts("");
    
        printf("Min -> %d\n", m[0]);
        printf("Max -> %d", m[u-1]);






}
