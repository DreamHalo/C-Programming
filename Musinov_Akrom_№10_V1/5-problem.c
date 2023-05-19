#include <stdio.h>      
#include <string.h>

int main(){
    char gap[30]={};
    printf("enter words: ");
    scanf("%[^\n]s",gap);
    printf("check output.txt file ");

    FILE  *ptr=fopen("1.txt","w");
    fprintf(ptr,"%s",gap);
    FILE  *ptr1=fopen("output.txt","r+");
    
  
    




    fclose(ptr);
    fclose(ptr1);
}

