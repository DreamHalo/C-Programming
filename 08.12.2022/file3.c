#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



int main(){
    FILE *ptr=fopen("soz.txt","w");
    int a=0,b=0;
    char set[50]={};
    while((a=fgetc(ptr))!=EOF){
        if(isdigit(a)){
            b=b+(a-48);
        }
    }
    printf("%d",a);

    fclose(ptr);


    // FILE *ptr=fopen("soz.txt","w");
    // fprintf(ptr,"salom");
    // ptr=fopen ("text.txt","r");
    // FILE *ptr1=fopen ("natija.txt","w");
    // int n;
    // char set;
    // scanf("%d",&n);
    // while(feof(ptr1)!=EOF){
    //     set =fgetc(ptr);
    //     for(int i=0; i<3;i++){
    //         fputc(set,ptr1);
    //     }
    // }     



    // fclose(ptr);
    // fclose(ptr1);

//  int d=0;
//     FILE *ptr =fopen ("soni.txt","w");
//     fprintf(ptr,"234 23 36 25 3");
//     fclose(ptr);
//     ptr=fopen("soni.txt","r");
//     FILE *ptr1=fopen("uchlar.txt","w");
//     FILE *ptr2=fopen("ikkilar.txt","w");
//     FILE *ptr3=fopen("birlar.txt","w");





















}