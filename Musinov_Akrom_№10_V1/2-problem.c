#include <stdio.h>


int main(){


    int s=0;
    int arr[10]={};
    printf("enter 10 array items: ");
    for(int i=0; i<10; i++){
    scanf("%d",&arr[i]);
    }
    for(int j=0; j<10; j++){
    printf("%d ",arr[j]);
    arr[j+1]+=arr[j];
    
}

}