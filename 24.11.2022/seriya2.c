#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

  int main(){

    // char salom[]="sa\0lom";
    // char hayr[100]="arsenal";
    // printf("%s",salom+3);

    // char gap [100];
    // printf("%s\n",gap);
    // scanf("%[^\ns",gap+3);
    // // printf("%s",gap);

    // for(int i=0; i<10;i++){
    //   if(gap[i]=="\\0"){
    //     printf("\\0");
    //   }
    //   printf("%c",gap[i]);

    // } 

    //srtcpy-> copy
    // char malumot1[100]="abcdefgh";
    // char malumot2[100]="12345678";
    // strcpy(malumot2,malumot1);
    // printf("malumot1-> %s\n",malumot1);
    // printf("malumot2-> %s\n",malumot2);
    

    // char malumot1[100]="abcdefgh";
    // char malumot2[100]="12345678";
    // strcpy(malumot2+4,malumot1+3);
    // printf("malumot1-> %s\n",malumot1);
    // printf("malumot2-> %s\n",malumot2);

    // // print("&s","salom");
    // char malumot1[100]="abcdefgh";
    // char malumot2[100]="12345678";
    // strcpy(malumot2+4," ");
    // printf("malumot1-> %s\n",malumot1);
    // printf("malumot2-> %s\n",malumot2);

    char malumot[5]="salomSALOMsalom";
    char natija[10];
    strcpy(natija,malumot);
    printf("%s",natija);



  }