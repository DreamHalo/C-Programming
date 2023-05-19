#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int sum(int son){
    if(son==1){
        return 1;
    }
    return son*sum(son-1);
}


int daraja(int a, int b){
    int c=0;
   
   c= pow(a,b);
    printf("%d",c);
    return 0;
}


int main(){
// printf("%d",sum(5));
 int a=0,b=0,c=0;

 scanf("%d",&a);
 scanf("%d",&b);
daraja(a,b);
}