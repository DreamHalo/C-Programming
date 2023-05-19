#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



void taqqos(int son ){
    int null=0;
    int sonlar=0;
    for(int i=son; son!=0;i/=10){
        int natija=(son%10);
        if(natija==0){
            null++;
        }else{
            sonlar++;
        }
    }
    if(null>sonlar){
    printf("(0) %d>%d",null,sonlar); 

    }else if(null<sonlar){
    printf("(0) %d<%d",null,sonlar);

    }else{
        printf("(0) %d=%d",null,sonlar);
    }
}

void toldirish(int arr[], int uzunlik){
    int before=0;
    int after=0;

    for(int i=0; i<uzunlik;i++){
        printf("%d",arr[i]);
    }
}




int main(){
    int son=0;
    printf("son kiriting  ");
    scanf("%d",son);
    taqqos(son);

int son=0;
int n=0;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}  
toldirish(arr,n);

    

    }
