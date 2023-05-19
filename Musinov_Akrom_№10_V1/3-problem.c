#include <stdio.h>



int addNumber(int number,int add){
    int n[2];
    n[0]=add;
    n[1]=number;
    for(int i=0; i<2; i++){
        printf("%d",n[i]);
    }

}

int main(){
    int number=0,add=0;
    printf("enter number: ");
    scanf("%d",&number);
    printf("enter new number: ");
    scanf("%d",&add);
    addNumber(number,add);
    
}


    