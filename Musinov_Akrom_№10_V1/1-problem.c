#include <stdio.h>      
#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main (){
    
    float a=0,b=0;
    printf("enter two floats: ");
    scanf("%f %f",&a , &b);
    int integer=(int)a+(int)b;
    a=a*10;
    b=b*10;
    int half=((int)a%10)+((int)b%10);
    if(integer<half){
        printf("%d<%d",integer,half);

    } else if(integer>half){
        printf("%d>%d",integer,half);

    }else {
        printf("%d=%d",integer,half);

    }



}


